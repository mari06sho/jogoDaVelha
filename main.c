#include <stdio.h>

#define JOGADOR_X 'X'
#define JOGADOR_ O 'O'

#define QTD_LINHAS 3
#define QTD_COLUNAS 3

int main(int argc, char const *argv[]){
    
    int linha;
    int coluna;
    int posicao;
    char tabuleiro[QTD_LINHAS][QTD_COLUNAS];

    for (linha = 0; linha < QTD_LINHAS; linha += 1)
        for (coluna = 0; coluna < QTD_COLUNAS; coluna += 1)
            tabuleiro[linha][coluna] = '_';

        


}