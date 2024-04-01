#include <stdio.h>

int main()
{
    int tamanho;
    scanf("%d", &tamanho);

    int matriz[10][10];

    printf("\nprimeira matriz:\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
        
    }

    int matriz2[10][10];
    printf("\nsegunda matriz:\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &matriz2[i][j]);
        }
    }
    int soma[100][100] = {{0},{0}};

    printf("\nsoma das matrizes:\n");
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            soma[i][j] = matriz[i][j] + matriz2[i][j];
            printf("%d ", soma[i][j]);
        }
        printf("\n");
    }
    
    
    

}