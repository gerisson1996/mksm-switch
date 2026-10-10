param(
    [string]$DriveLetter = ""
)

$SourceSD = "C:\Users\geris\.gemini\antigravity\scratch\mksm-sw\switch_sd\switch"
$GameSource = "C:\Users\geris\.gemini\antigravity\scratch\mksm-sw\game"

Write-Host "=== Preparando arquivos para o Cartão MicroSD do Switch ===" -ForegroundColor Cyan

# Copiar arquivos do jogo para a pasta de staging se ainda não estiverem lá
$TargetGame = "C:\Users\geris\.gemini\antigravity\scratch\mksm-sw\switch_sd\switch\mksm\game"
Write-Host "Sincronizando arquivos do jogo para a pasta de staging..." -ForegroundColor Yellow
Copy-Item -Path "$GameSource\*" -Destination "$TargetGame" -Recurse -Force -Exclude "*_analysis.json"

Write-Host "Pasta de staging pronta em: $SourceSD\mksm" -ForegroundColor Green

if ($DriveLetter) {
    $TargetDrive = "$($DriveLetter.TrimEnd(':\')):\switch"
    Write-Host "Copiando para o Cartão SD ($TargetDrive\mksm)..." -ForegroundColor Yellow
    New-Item -ItemType Directory -Force -Path "$TargetDrive\mksm" | Out-Null
    Copy-Item -Path "$SourceSD\mksm\*" -Destination "$TargetDrive\mksm" -Recurse -Force
    Write-Host "Cópia para o cartão SD concluída com sucesso!" -ForegroundColor Green
} else {
    Write-Host "`nDica: Para copiar direto para o cartão SD, execute:" -ForegroundColor Magenta
    Write-Host "  .\tools\copy_to_sd.ps1 -DriveLetter E:" -ForegroundColor White
}
