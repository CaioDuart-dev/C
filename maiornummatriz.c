#include <stdio.h>
int main()
{
    int tamanho;
    int matriz[10][10];
    int maior = 0;
    
    scanf("%d", &tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = 0; j < tamanho; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < tamanho; i++)
    {
        for(int j = 0; j <tamanho; j++)
        {
            if (maior < matriz[i][j])
            {
                maior = matriz[i][j];
                
            }
        }
    }
    printf("\nmaior numero:\n%d\n", maior);
    

    

    return 0;
}