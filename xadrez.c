#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

// Função recursiva para o movimento diagonal do Bispo (cima direita)
void moverBispoRecursivo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispoRecursivo(casas - 1);
}

// Função usando loops aninhados para o Bispo (movimento diagonal)
void moverBispoComLoops(int casas) {
    for (int i = 1; i <= casas; i++) {
        for (int j = 1; j <= 1; j++) {  // Representando uma casa na horizontal
            printf("Cima Direita\n");
        }
    }
}

// Movimento do Cavalo: "L" (duas casas para cima, uma para a direita)
void moverCavalo() {
    int cima = 2;
    int direita = 1;
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < cima + 1; i++) {
        if (i < cima) {
            printf("Cima\n");
            continue;
        }

        for (int j = 0; j < direita + 1; j++) {
            if (j < direita) {
                printf("Direita\n");
            } else {
                break;
            }
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispoRecursivo(casasBispo);

    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoComLoops(casasBispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    moverCavalo();

    return 0;
}
