#include <stdio.h>

int main() {
    int tamanho;
    scanf("%d", &tamanho);

    int mapa[500][500];
    int soma[500] = {0};

    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &mapa[i][j]);
        }
    }

    int maior = 0;
    int maior_coluna = 0;

    for (int j = 0; j < tamanho; j++) 
    {
        for (int i = 0; i < tamanho; i++) 
        {
            soma[j] += mapa[i][j];
        }

        if (soma[j] > maior) 
        {
            maior = soma[j];
            maior_coluna = j + 1;
        }
    }

    printf("%d\n", maior_coluna);

    return 0;
}
