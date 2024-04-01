#include <stdio.h>

int main()
{    
    
    int tamanho; 
    scanf("%d", &tamanho);
    int tabela[10][10];
        
        for(int i = 0; i< tamanho; i++) //criar linhas 
        {
            for (int j = 0; j < tamanho; j++) //criar colunas
            {
                scanf("%d", &tabela[i][j]);
            }
        }
    
        printf("\ntabela lida:\n");

        for(int i = 0; i< tamanho; i++) //acessar linhas
        {
            for (int j = 0; j < tamanho; j++) //acessar colunas
            {
                
                printf("%d ", tabela[i][j]);
            }    
            printf("\n");
        }
}
