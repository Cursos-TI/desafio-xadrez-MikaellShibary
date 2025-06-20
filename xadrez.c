#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main()
{

    //Declaracao das pecas do xadres
    int xadrez = 1; //Quando 0 endgame
    int Bispo_1, Bispo_2, Torre_1, Torre_2, Rainha;
    int opcao;

    /*while (xadrez)
    {
        printf("### Jogo de XADREZ ###\n");
        printf("Escolha a opção conforme número da peça para movimenta-las\n");
        printf("1 - Mover Bispo Branco\n");
        printf("2 - Mover Torre Branca\n");
        printf("3 - Mover Rainha Branca\n");*/
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
                // Implementação de Movimentação do Bispo
            for (Bispo_1 = 0; Bispo_1 < 5; Bispo_1++){
            printf("Bispo Branco 1 movimentou-se para superior direita.\n");
        break;
        case 2:
            // Implementação de Movimentação da Torre
            for (Torre_1 = 0; Torre_1 < 6; Torre_1++){
            printf("Torre Branca 1 movimentou-se para à cima.\n");
        break;
        case 3:
            // Implementação de Movimentação da Rainha
            for (Rainha = 0; Rainha < 8; Rainha++){
            printf("Rainha Branca  movimentou-se para à esquerda.\n");
        break;
        case 4:
            // Finalizar jogada
            printf("Finalizando jogada...\n");
            xadrez = 0;
        break;
        default:
                printf("opção invalida\n");
            break;
        }

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
