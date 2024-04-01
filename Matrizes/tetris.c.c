#include <stdio.h>

#define MAX_SIZE 15

int main() {
    int n;
    scanf("%d", &n);

    int matriz[MAX_SIZE][MAX_SIZE];

    // Leitura da matriz
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // Passo 1: Substituir 1's em linhas inteiras por 0's
    for (int i = 0; i < n; i++) {
        int hasOnlyOnes = 1; // Verifica se a linha contém apenas 1's

        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 0) {
                hasOnlyOnes = 0;
                break;
            }
        }

        if (hasOnlyOnes) {
            for (int j = 0; j < n; j++) {
                matriz[i][j] = 0;
            }
        }
    }

    // Passo 2: Imprimir matriz resultante do Passo 1
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    // Passo 3: Eliminar linhas que contêm apenas 0's
    int linhas = n;

    for (int i = n - 1; i >= 0; i--) {
        int hasOnesAboveZeros = 0; // Verifica se existe 1 acima de 0 em alguma coluna

        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 1 && i < linhas - 1 && matriz[i + 1][j] == 0) {
                hasOnesAboveZeros = 1;
                matriz[i + 1][j] = 1;
                matriz[i][j] = 0;
            }
        }

        if (!hasOnesAboveZeros) {
            linhas--;
        }
    }
    printf("\n");
    // Passo 4: Imprimir matriz resultante do Passo 3
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
