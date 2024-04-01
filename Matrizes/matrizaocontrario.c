#include <stdio.h>
int main()
{
    int linhas, colunas;
    scanf("%d %d", &linhas,&colunas);

    int matriz[10][10];
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j< colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nmatriz de cabeça para baixo: \n");
    for (int i = linhas-1; i >= 0; i--) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}