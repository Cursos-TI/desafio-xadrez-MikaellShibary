#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Recursivo, movimentar peça conforme valor inserido
void moverbispo (int bispo){ 
    if (bispo>0){
        moverbispo (bispo - 1);
        printf("Bispo Branco se movimentou para a diagonal superior direita, (%d) casa.\n", bispo);
    }
}
// Recursivo, movimentar peça conforme valor inserido
void movertorre (int torre){ 
    if (torre>0){
        movertorre (torre - 1);
        printf("Torre Branca se movimentou para cima, (%d) casa.\n", torre);
    }
}
// Recursivo, movimentar peça conforme valor inserido
void moverrainha (int rainha){ 
    if (rainha>0){
        moverrainha (rainha - 1);
        printf("Rainha Branca se movimentou para a esquerda, (%d) casa.\n", rainha);
    }
}
// Recursivo, movimentar peça conforme valor inserido
void movercavalo (int cavalo){ 
    if (cavalo>0){
        movercavalo (cavalo - 1);
        for (int i = 1; i < 3; i++){
            printf("Cavalo Branco fez o movimento em 'L' para cima, (%d) casa.\n",i);
        }
        printf("Cavalo Branco fez o movimento em 'L' para direta, (%d) casa.\n", cavalo);
    }
}
int main()
{

    int xadrez = 1; // Controle do jogo (1 = em andamento, 0 = encerrado)
    int opcao;
        while (xadrez){
        printf("\n### Jogo de XADREZ ###\n");
        printf("Escolha a opção conforme número da peça para movimentá-las:\n");
        printf("1 - Mover Bispo Branco\n");
        printf("2 - Mover Torre Branca\n");
        printf("3 - Mover Rainha Branca\n");
        printf("4 - Mover Cavalo Branco\n");
        printf("5 - Finalizar Jogo\n");
        printf("Opção: ");
        scanf("%d", &opcao);

            switch (opcao){
            case 1:
                // Movimentação do Bispo
                moverbispo(5);
                /*for (int i = 0; i < 5; i++){
                printf("Bispo Branco se movimentou para a diagonal superior direita, (%d) casa.\n", i + 1);
                }*/
            break;

            case 2:
                // Movimentação da Torre
                movertorre(6);
                /*for (int i = 0; i < 6; i++){
                printf("Torre Branca se movimentou para cima, (%d) casa.\n", i + 1);
                }*/
            break;

            case 3:
                // Movimentação da Rainha
                moverrainha(8);
                /*for (int i = 0; i < 8; i++){
                printf("Rainha Branca se movimentou para a esquerda, (%d) casa.\n", i + 1);
                }*/
            break;

            case 4:
                // Movimentação do Cavalo
                movercavalo(1);
                /*for (int i = 0; i < 1; i++){
                    for (int i = 0; i < 2; i++)
                    {
                        printf("Cavalo Branco fez o movimento em 'L' para baixo, (%d) casa.\n");
                    }
                    
                printf("Cavalo Branco fez movimento em 'L' para esquerda, (%d) casa.\n", i + 1);
                }*/
            break;

            case 5:
            // Encerrar o jogo
            printf("Finalizando o jogo...\n");
            xadrez = 0;
            break;

            default:
            printf("Opção inválida. Tente novamente.\n");
            break;
            }
        }

    return 0;
}
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.