# Joguin da Velha 🎮

Implementação do clássico Jogo da Velha em linguagem C. Ele possui dois modos de jogo: dois jogadores ou contra o computador.

---

## Sobre o projeto

O jogo é dividido em dois arquivos:

- **main.c** — modo dois jogadores, onde X e O se alternam no mesmo terminal
- **desafio.c** — modo um jogador, onde você enfrenta o computador (jogador O) que faz jogadas aleatórias

---

## Tecnologias utilizadas

- Linguagem C 
- GCC como compilador
- Make para automação da compilação

---

## Como compilar e executar

### Pré-requisitos

- GCC instalado
- Make instalado
  - **Linux:** já vem instalado na maioria das distribuições
  - **Windows:** use `mingw32-make` no lugar de `make`

### Compilar os dois arquivos de uma vez

```bash
make
```

### Executar

```bash
# Modo dois jogadores
make run-main

# Modo contra o computador
make run-desafio
```

### Limpar os executáveis

```bash
make clean
```

> No Windows com PowerShell, substitua `make` por `mingw32-make` em todos os comandos acima.

---

## Como jogar

O tabuleiro é numerado de 1 a 9, da esquerda para a direita, de cima para baixo:

1 | 2 | 3
4 | 5 | 6
7 | 8 | 9

Na sua vez, digite o número da posição onde deseja jogar e pressione Enter. O jogador X sempre começa.

---

## Estrutura do projeto
jogoDaVelha/
├── main.c        # Modo dois jogadores
├── desafio.c     # Modo contra o computador
├── Makefile      # Automação de compilação
├── .gitignore    # Ignora executáveis gerados
└── README.md     # Este arquivo

---

Feito com C puro por Mariana Silva de Holanda e Maria Gabriele Dantas para fins de estudo acadêmicos da cadeira de laboratório de programação.
