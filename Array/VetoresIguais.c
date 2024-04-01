              #include <stdio.h>

              int main() {
              int linhas, i;
              int vet1[10000], vet2[10000];
              
              scanf("%d", &linhas);
              
              // Leitura do primeiro vetor
              for(i = 0; i < linhas; i++) {
              scanf("%d", &vet1[i]);
              }
              
              // Leitura do segundo vetor
              for(i = 0; i < linhas; i++) {
              scanf("%d", &vet2[i]);
              }
              
              // Verificação de identidade dos vetores
              for(i = 0; i < linhas; i++) {
              if(vet1[i] != vet2[i]) {
              printf("nao\n");
              return 0;
              }
              }
              
              printf("sim\n");
              
              return 0;
              }
