#include <stdio.h>
int main()
{
              int linhas;
              int vet[10000];
              int i;
              int num;
              scanf("%d", &linhas);
              for(i = 0; i < linhas; i++) //criar linhas
              {
                            scanf("%d", &vet[i]); //ler o teclado
              }
              scanf("%d", &num);

              for (i = 0; i < linhas ; i++)
              {
              if(num == vet[i])
              {
                            printf("pertence\n");
                            return 0;
              }
              }
              printf("nao pertence\n");
              
              
return 0;
}