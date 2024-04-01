#include <stdio.h>
int main()
{
              int i, linhas;

              scanf("%d", &linhas);
              
              int vet[linhas];

              for(i = 0; i < linhas; i++) //criar linhas e membros para serem lidos
              {
                            scanf("%d", &vet[i]);
              }
              printf("\n");
              for(i = 0; i < linhas; i++) //use for exatamente igual para acessar os membros pares junto com if
              {
                            if( vet[i] % 2 == 0) //achar pares
                            {
                                          printf("%d ", vet[i]);
                            }
              }
              printf("\n");
              for(i = 0; i < linhas; i++) //usamos for mais uma veez para acessar os impares
              {
                            if(  vet[i]%2 == 1) //achar os impares
                            {
                                          printf("%d ",vet[i]);
                            }
              }
return 0;
}