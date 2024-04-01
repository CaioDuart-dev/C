#include <stdio.h>
int main()
{
    int matriz[3][3];
    int soma[3] = {0};
    for(int i = 0; i< 3; i++) //linhas
    {
        for(int j =0; j <3; j++) //colunas
        {
            scanf("%d",&matriz[i][j]);
            soma[i] += matriz[i][j]; 
        }
    }
    printf("soma linhas:\n");
    int somaa= 0;
    for(int i = 0; i< 3; i++) //linhas
    {
        printf("%d ",soma[i]);
        somaa+= soma[i];
    }
        printf("\nsoma total da matriz:\n%d",somaa);
    
}