#include <stdio.h>
int main()
{
              int linhas, i, soma;
              int vet[10000], vet2[10000];

              scanf("%d", &linhas);

              for(int i = 0; i < linhas; i++)
              {
                            scanf("%d", &vet[i]);
              }
              for(int i = 0; i < linhas; i++)
              {
                            scanf("%d", &vet2[i]);
              }
              for(i = 0; i < linhas; i++)
              {
                            soma = vet[i] + vet2[i];
                            printf("%d ", soma);
              }
              return 0;
}