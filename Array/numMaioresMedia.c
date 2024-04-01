              #include <stdio.h>

              int main()
{
              int linhas, i, soma = 0;
              int vet[10000];
              int tem_valor_maior = 0;

              scanf("%d", &linhas);
              for(i = 0; i < linhas; i++) // criar linhas/membros
              {
                            scanf("%d", &vet[i]);  //inserir os valores nos vetores
                            soma += vet[i]; //acumular a soma dos valores
              }
              
              int media = soma / linhas; //calcular a média
              
              for(i = 0; i < linhas; i++) //acessar os vetores
              {
                            if(vet[i] > media)
                            {
                            printf("%d ", vet[i]);
                            tem_valor_maior++;
                            }
              }
              if(tem_valor_maior==0) //se não há valor maior que a média, imprime 0
              {
              printf("0");
              }

              return 0;
}
