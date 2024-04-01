#include <stdio.h>
int main()
{
              int linhas, smenor= 1000001, tmenor=1000001, menor = 1000001;  //variaveis declaradas com valor limite descrito pela tarefa.
              int vet[10000];
              scanf("%d", &linhas);

              for(int  i = 0; i < linhas; i++) //criar linhas para ler valores
              {
              scanf("%d", &vet[i]);
              
              if(vet[i] < menor)
              {                                         //se o vetor for menor, ele atualiza o programa pra menor ser o valor contido no vetor
                            tmenor = smenor;
                            smenor = menor;
                            menor = vet[i];
              } 
              else if(vet[i] < smenor && vet[i] != menor)
              {
                            tmenor = smenor;
                            smenor = vet[i];
              } 
              else if(vet[i] < tmenor && vet[i] != menor && vet[i] != smenor)
              {
              tmenor = vet[i];
              }
              }

              printf("%d\n %d\n", smenor, tmenor);

}
