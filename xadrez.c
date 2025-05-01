#include <stdio.h>

// Desafio de Xadrez - MateCheck
//Constante para quantidade de movimento de cada peça
#define BISPO 5
#define TORRE 5
#define RAINHA 8

int main() {

    int i;

    // Nível Novato - Movimentação das Peças
    // Implementação de Movimentação do Bispo
    printf("movimentação do bispo\n");

    for(i = 0; i < BISPO; i++){
        printf("cima\n");
        printf("direita\n");
    }
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    printf("\nMovimentação da torre\n");
   
    i = 0;

while (i < TORRE)
{
    printf("Direita\n");
    i++;
}


    // Implementação de Movimentação da Rainha
    printf("\nMovimentação da Rainha\n");

    i = 0;

    do
    {
        printf("esquerda\n");
        i++;
} while (i < RAINHA);
    

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
