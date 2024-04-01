#include <stdio.h>

int main() {
    int i, linhas, pares[10000], impares[10000], num_pares = 0, num_impares = 0;

    scanf("%d", &linhas);

    int vet[linhas];

    for (i = 0; i < linhas; i++) {
        scanf("%d", &vet[i]);
    }

    for (i = 0; i < linhas; i++) {
        if (vet[i] % 2 == 0) {
            pares[num_pares] = i;
            num_pares++;
        } else {
            impares[num_impares] = i;
            num_impares++;
        }
    }

    for (i = 0; i < num_pares; i++) {
        printf("%d", pares[i]);
        if (i != num_pares - 1) {
            printf(" ");
        }
    }
    printf("\n");

    for (i = 0; i < num_impares; i++) {
        printf("%d", impares[i]);
        if (i != num_impares - 1) {
            printf(" ");
        }
    }

    return 0;
}
