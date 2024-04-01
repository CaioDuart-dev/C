#include <stdio.h>
int main()
{
              int linhas, indice = 0, menor;
              int vet[10000];
              int i;
              scanf("%d", &linhas);
              for(i = 0; i < linhas; i++) //criar linhas
              {
                            scanf("%d", &vet[i]); //ler o teclado
              }
              menor = vet[0];
              for(i = 1; i <= linhas; i++) //acessar os membros um por um.
              {
                            if(vet[i] < menor) //achar o menor e seu indice.
                            {
                                          menor = vet[i];
                                          indice  = i;
                            }
              }
              printf("%d", indice);

return 0;
}