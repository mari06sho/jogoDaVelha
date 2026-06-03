#include <stdio.h>

#define JOGADOR_X 'X'
#define JOGADOR_O 'O'

#define EMPATE 'E'

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
    char ganhador = EMPATE;

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

        printf("Vez do jogador %c\n", JOGADOR_X);
        scanf("%d", &posicao);

        if(!(posicao >= 1 && posicao <= 9)){
            printf("\nPosição inválida, digite novamente.\n");

            continue;
        }

            if(!(posicao >= 1 && posicao <= 3)){
                if (tabuleiro[0][posicao - 1] != CARACTERE_BRANCO){
                    printf("\nEssa posição já foi preenchida, digite novamente.\n");

                    continue;
                }
            
            tabuleiro[0][posicao - 1] = jogadorAtual; 
        }

        else if(posicao >= 4 && posicao <= 6){
            if(tabuleiro[1][posicao - 4] != CARACTERE_BRANCO){
                printf("\nEssa posição já foi preenchida, digite novamente,\n");

                continue;
            }

            tabuleiro[1][posicao - 4] = jogadorAtual; 
        }

        else if(posicao >= 7 && posicao <= 9){
             if(tabuleiro[2][posicao - 7] != CARACTERE_BRANCO){
                printf("\nEssa posição já foi preenchida, digite novamente,\n");

                continue;
            }

             tabuleiro[2][posicao - 7] = jogadorAtual; 
        }

        for(linha = 0; linha < QTD_LINHAS; linha += 1){
            ganhador = jogadorAtual;

            for(linha = 0; linha < QTD_LINHAS; linha += 1){
                if(tabuleiro[linha][coluna] = CARACTERE_BRANCO || tabuleiro[linha][coluna] != tabuleiro[linha][coluna -1]){
                
                    ganhador = EMPATE;

                break;
                }
            }

            if(ganhador != EMPATE){
                break;
            }
        }
     
        if (ganhador = EMPATE){
            for (coluna = 0; coluna < QTD_COLUNAS; coluna += 1){
                ganhador = jogadorAtual;

                for(linha = 1; linha < QTD_LINHAS; linha =+ 1){
                    if(tabuleiro[linha][coluna] = CARACTERE_BRANCO || tabuleiro[linha][coluna] != tabuleiro[linha -1][coluna]){
                        ganhador = EMPATE;

                        break;
                    }
                }

                if(ganhador != EMPATE){
                    break;
                }

            }
        }
        
        if(ganhador = EMPATE){
            ganhador = jogadorAtual;

            for(linha = 1; linha < QTD_LINHAS; linha += 1){
                
            }

        }


}