#include <stdio.h>

// Desafio de Xadrez - MateCheck
//Constante para quantidade de movimento de cada peça
#define BISPO 5
#define TORRE 5
#define RAINHA 8
#define CAVALO 3

// função recursiva com Loop aninhado - Bispo
void moverBispo(int passo){
    if (passo == 0) return; //recursão para quando chegar a 0
    //simula "cima" e "direita" como se fosse movimento diagonal
    for (int i = 0; i < 1; i++)
    {
        printf("cima\n");
        for (int j = 0; j < 1; j++)
        {
            printf("direita\n");
        }
        
    }
    moverBispo (passo -1); //chamada recursiva 
}
    

// Função recursiva simples - Torre
void moverTorre (int passo){  
    if (passo == 0) return;      // caso base
    
        printf("Direita\n");
        moverTorre(passo -1); // chamada recursiva
    
}

// Função recursiva simples - Rainha
void moverRainha (int passo){
    if (passo == 0) return;  // caso base
    
        printf("Esquerda\n");
        moverRainha(passo -1); // chamada recursiva
    
}

// Cavalo com múltiplas variáveis, continue e break
void moverCavalo(){

    printf("Movimentação do cavalo\n");

    int i, j;
    for(i = 0, j = 2; i < 3; i++, j--) {
        if (i == j) continue; // pula se i == j

        printf("cima\n");
        printf("cima\n");

        if (i > 1) break; // sai do loop se i > 1

        printf("Direita\n");
    }
}

int main() {

    printf("Movimentação do Bispo\n");
    moverBispo(BISPO);

    printf("\nMovimentação da Torre\n");
    moverTorre(TORRE);

    printf("\nMovimentação da Rainha\n");
    moverRainha(RAINHA);

    printf("\n");
    moverCavalo();

    return 0;
}
