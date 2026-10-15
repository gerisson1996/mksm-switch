# Mortal Kombat: Shaolin Monks (Xbox) - Port Nativo para Nintendo Switch

Porte nativo de **Mortal Kombat: Shaolin Monks (Xbox Original)** para o **Nintendo Switch**, baseado em **Recompilação Estática (Static Recompilation)** com o `xboxrecomp` e a infraestrutura de backend desenvolvida por `antoxa2584x`.

---

## 🚀 Como funciona

O jogo **não roda através de um emulador pesado** (como Xemu). O binário x86 original (`default.xbe`) foi totalmente traduzido instrução por instrução para código C nativo (**28.178 funções**, ~126 MB de código C) e compilado diretamente para a arquitetura **AArch64 (ARM64)** do Nintendo Switch usando o `devkitA64` (GCC 16.1.0).

- **Código:** Execução 100% nativa na CPU do Switch (Cortex-A57).
- **GPU:** Tradução dos comandos e pushbuffers da NV2A do Xbox para OpenGL/libnx.
- **Áudio:** MCPX APU do Xbox com saída em SDL2.
- **Idiomas:** Totalmente compatível com a dublagem e legendas em Português do Brasil (PT-BR).

---

## 🎮 Como Jogar no Nintendo Switch

### 1. Estrutura no Cartão MicroSD:

Copie o conteúdo da pasta `switch_sd/switch/mksm` para o seu cartão SD em:

```
sdmc:/switch/mksm/
├── mksm.nro               # O executável do jogo (~31 MB)
├── mksm_env.txt           # Configurações opcionais
└── game/
    ├── default.xbe        # Executável do Xbox (fornece dados do cabeçalho)
    ├── GAMEDATA.WAD       # Arquivos de dados do jogo
    ├── GAMEDATA.WAE
    ├── ...
    ├── English/
    ├── front/             # Vídeos e cutscenes (.sfd)
    └── classic/           # Minigames clássicos
```

### 2. Iniciando no Console:
> [!IMPORTANT]
> **Use sempre Title Takeover:**
> No menu inicial do Switch, segure o botão **R** e abra **qualquer jogo instalado**. O Homebrew Menu abrirá em modo de memória total (Title Override com ~3.2 GB de RAM disponível). Nunca inicie pelo modo Applet (Álbum), pois ele tem memória insuficiente.

---

## 🛠️ Recompilação e Scripts Úteis

- **Re-gerar o código C a partir do XBE:**
  ```powershell
  .\tools\regen_mksm.ps1
  ```

- **Compilar o `.nro` do Switch:**
  ```bash
  # No MSYS2 do devkitPro:
  switch/build_switch_msys2.sh
  ```

- **Copiar para o Cartão SD:**
  ```powershell
  # Exemplo com o cartão na letra E:
  .\tools\copy_to_sd.ps1 -DriveLetter E:
  ```

---

## ⚙️ Configurações (`mksm_env.txt`)

No arquivo `sdmc:/switch/mksm/mksm_env.txt`:
- `RECOMP_GL_SCALE=1.0`: Escala de resolução gráfica (ex: 1.0 = nativo 720p/1080p).
- `RECOMP_QUIET=0`: Salva logs detalhados de inicialização em `mksm_log.txt`.
- `RECOMP_VBLANK=1`: Sincroniza as taxas de quadro com a tela do console.
- `RECOMP_AUDIO=1`: Ativa a saída de áudio via SDL2 no Switch.
- `RECOMP_AUDIO_BLOCKS=12`: Tamanho da fila de áudio em blocos de 256 amostras (padrão no Switch; 8 no Linux).
- `RECOMP_AUDIO_VOLUME=80`: Volume do master em porcentagem (0..100).
- `RECOMP_NX_AUDIO_PRIO=1`: Mantém a prioridade da thread SDL de áudio em 0x2B para evitar gaps e crackle no audren. Use `0` para reverter ao comportamento antigo.

