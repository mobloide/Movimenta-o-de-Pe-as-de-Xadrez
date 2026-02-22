#include <stdio.h>

/**
 * Desafio: Movimentação das Peças de Xadrez
 * Nível: Novato
 */

int main() {
    // Definição das constantes de movimento
    const int MOVIMENTO_TORRE = 5;
    const int MOVIMENTO_BISPO = 5;
    const int MOVIMENTO_RAINHA = 8;

    int i; // Variável de controle para as repetições

    printf("--- Simulação de Movimentos de Xadrez ---\n\n");

    // 1. Movimentação da Torre (Usando o laço FOR)
    // A Torre se move 5 casas para a DIREITA.
    printf("Movimento da Torre:\n");
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimentação do Bispo (Usando o laço WHILE)
    // O Bispo se move 5 casas para CIMA e DIREITA (diagonal).
    printf("Movimento do Bispo:\n");
    i = 1; // Reiniciando o contador
    while (i <= MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }
    printf("\n");

    // 3. Movimentação da Rainha (Usando o laço DO-WHILE)
    // A Rainha se move 8 casas para a ESQUERDA.
    printf("Movimento da Rainha:\n");
    i = 1; // Reiniciando o contador
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= MOVIMENTO_RAINHA);
    printf("\n");

    return 0;
}