#include <stdio.h>

#define JOGADOR_X 'X'
#define JOGADOR_O 'O'
#define CARACTERE_BRANCO '_'

#define QTD_LINHAS 3
#define QTD_COLUNAS 3

int main(int argc, char const *argv[]){
    
    int linha;
    int coluna;
    int posicao;
    int contJogadas = 0;
    int tamTabuleiro = QTD_LINHAS * QTD_COLUNAS;
    
    char tabuleiro[QTD_LINHAS][QTD_COLUNAS];
    char jogadorAtual = JOGADOR_X;

    for (linha = 0; linha < QTD_LINHAS; linha += 1){
        for (coluna = 0; coluna < QTD_COLUNAS; coluna += 1){
            tabuleiro[linha][coluna] = CARACTERE_BRANCO;
        }
    }

    while (1){
            printf("\n");

            for(linha = 0; linha < QTD_LINHAS; coluna += 1){
                for(coluna = 0; coluna < QTD_COLUNAS; coluna +=1){
                    printf("%c", tabuleiro[linha][coluna]);
                    printf("\n");
                }
            }
    }
     
    

    printf("Vez do jogador %c\n", JOGADOR_X);
    scanf("%d", &posicao);

        


}