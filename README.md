<div align="center">

<h1>🎮 Joguin da Velha</h1>

<p>Jogo da Velha em C • Modo Dois Jogadores • Modo contra o Computador</p>

<img src="https://img.shields.io/badge/LINGUAGEM-C-blue?style=for-the-badge"/>
<img src="https://img.shields.io/badge/AMBIENTE%20ACADÊMICO-IFCE-green?style=for-the-badge"/>

</div>

---

## 📋 Índice

1. [Sobre o Projeto](#sobre-o-projeto)
2. [Estrutura do Projeto](#estrutura-do-projeto)
3. [Como Compilar e Executar](#como-compilar-e-executar)
4. [Como Jogar](#como-jogar)
5. [Tecnologias](#tecnologias)
6. [Autoria](#autoria)

---

## Sobre o Projeto

O jogo é dividido em dois arquivos:

* `main.c` — modo dois jogadores, onde X e O se alternam no mesmo terminal
* `desafio.c` — modo um jogador, onde você enfrenta o computador (jogador O) que faz jogadas aleatórias

## Estrutura do Projeto

    jogoDaVelha/
    ├── main.c        # Modo dois jogadores
    ├── desafio.c     # Modo contra o computador
    ├── Makefile      # Automação de compilação
    ├── .gitignore    # Ignora executáveis gerados
    └── README.md     # Este arquivo

## Como Compilar e Executar

### Pré-requisitos

* GCC instalado
* Make instalado
  * Linux: já vem instalado na maioria das distribuições
  * Windows: use `mingw32-make` no lugar de `make`

### Compilar os dois arquivos de uma vez

    make

### Executar

    # Modo dois jogadores
    make run-main

    # Modo contra o computador
    make run-desafio

### Limpar os executáveis

    make clean

> No Windows com PowerShell, substitua `make` por `mingw32-make` em todos os comandos acima.

## Como Jogar

O tabuleiro é numerado de 1 a 9, da esquerda para a direita, de cima para baixo:

     1 | 2 | 3
    -----------
     4 | 5 | 6
    -----------
     7 | 8 | 9

Na sua vez, digite o número da posição onde deseja jogar e pressione Enter. O jogador X sempre começa.

## Tecnologias

* Linguagem C
* GCC como compilador
* Make para automação da compilação

## Autoria

Feito com C puro por Mariana Silva de Holanda e Maria Gabriele Dantas para fins de estudo acadêmicos da cadeira de laboratório de programação.
