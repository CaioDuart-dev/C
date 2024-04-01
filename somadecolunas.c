#include <stdio.h>
int main()
{
    int tamanho;
    scanf("%d", &tamanho);

    int matriz[100][100];
    int soma[100] = {0};
    for(int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &matriz[i][j]);
            soma[j]+= matriz[i][j];
        }
    }

    printf("\nsoma das colunas:\n");
        for(int j = 0; j < tamanho;j++)
        {
            printf("%d  ", soma[j]);
        }
    printf("\n");
    return 0;
}