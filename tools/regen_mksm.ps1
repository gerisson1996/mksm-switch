# Script de regeneração do código C para Mortal Kombat: Shaolin Monks
$ErrorActionPreference = "Stop"

$Root = Split-Path -Parent $PSScriptRoot
$Tk = Join-Path $Root "xboxrecomp"
$Xbe = Join-Path $Root "game\default.xbe"
$Gen = Join-Path $Root "gen"
$SeedJson = Join-Path $Root "config\seed_functions.json"
$ManualC = Join-Path $Root "src\recomp_manual.c"

Write-Host "=== Iniciando Pipeline de Recompilação do MK:SM ===" -ForegroundColor Cyan
Write-Host "XBE: $Xbe"
Write-Host "Output Gen: $Gen"

Set-Location $Tk

Write-Host "`n[1/4] Desmontagem e detecção de funções (disasm)..." -ForegroundColor Yellow
python -m tools.disasm "$Xbe" --seed-functions "$SeedJson"

Write-Host "`n[2/4] Identificação de bibliotecas (func_id)..." -ForegroundColor Yellow
python -m tools.func_id "$Xbe"

Write-Host "`n[3/4] Análise de ABI e convenções de chamada (abi_analysis)..." -ForegroundColor Yellow
python -m tools.abi_analysis "$Xbe"

Write-Host "`n[4/4] Gerando código C re-compilado (recomp)..." -ForegroundColor Yellow
if (-not (Test-Path $Gen)) {
    New-Item -ItemType Directory -Path $Gen | Out-Null
}
if (Test-Path "$Gen\recomp_types.h") {
    Remove-Item "$Gen\recomp_types.h" -Force
}

python -m tools.recomp "$Xbe" --game-name "Mortal Kombat Shaolin Monks" --all --split 250 `
    --gen-dir "$Gen" --exclude-manual "$ManualC" `
    --mmio-sections DSOUND,XPP

Write-Host "`n=== Concluído com sucesso! Código C gerado em $Gen ===" -ForegroundColor Green
