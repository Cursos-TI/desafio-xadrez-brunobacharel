#include <stdio.h>

int main() {
    // ========== TORRE ==========
    // A Torre se move 5 casas para a direita
    printf("Movimento da Torre (5 casas para a Direita):\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita\n");
    }

    // ========== BISPO ==========
    // O Bispo se move 5 casas na diagonal (Cima Direita)
    printf("\nMovimento do Bispo (5 casas na Diagonal Cima Direita):\n");
    int contadorBispo = 1;
    while (contadorBispo <= 5) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    // ========== RAINHA ==========
    // A Rainha se move 8 casas para a esquerda
    printf("\nMovimento da Rainha (8 casas para a Esquerda):\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= 8);

    return 0;
}
