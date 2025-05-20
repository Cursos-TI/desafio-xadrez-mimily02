#include <stdio.h>

// ----------------------------- TORRE -----------------------------
// Função recursiva para mover a Torre para a Direita
void moverTorre(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// ----------------------------- BISPO -----------------------------
// Função recursiva principal para o movimento diagonal
void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical <= 0 || horizontal <= 0) return;

    printf("Cima Direita\n");
    moverBispoRecursivo(vertical - 1, horizontal - 1);
}

// Função com loops aninhados (externo: vertical, interno: horizontal)
void moverBispoComLoops(int movimentos) {
    for (int i = 0; i < movimentos; i++) { // vertical
        for (int j = 0; j < 1; j++) {      // horizontal (1 por passo diagonal)
            printf("Cima Direita\n");
        }
    }
}

// ----------------------------- RAINHA -----------------------------
// Função recursiva para mover a Rainha para a Esquerda
void moverRainha(int casasRestantes) {
    if (casasRestantes <= 0) return;

    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// ----------------------------- CAVALO -----------------------------
// Loops aninhados com múltiplas variáveis e controle de fluxo
void moverCavalo() {
    int movimentos = 1;  // quantidade de movimentos em "L"
    int passosVerticais = 2;
    int passosHorizontais = 1;

    for (int m = 0; m < movimentos; m++) {
        int i = 0, j = 0;

        while (i < passosVerticais + passosHorizontais) {
            if (i < passosVerticais) {
                printf("Cima\n");
                i++;
                continue;
            }

            for (j = 0; j < passosHorizontais; j++) {
                if (j == 0) {
                    printf("Direita\n");
                    break;
                }
            }

            break;
        }
    }
}

// ----------------------------- MAIN -----------------------------
int main() {
    // Movimento da Torre (5 casas para a Direita)
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo (com recursividade):\n");
    moverBispoRecursivo(5, 5);

    printf("\nMovimento do Bispo (com loops aninhados):\n");
    moverBispoComLoops(5);

    // Movimento da Rainha (8 casas para a Esquerda)
    printf("\nMovimento da Rainha:\n");
    moverRainha(8);

    // Movimento do Cavalo (duas casas para cima e uma para a direita)
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
