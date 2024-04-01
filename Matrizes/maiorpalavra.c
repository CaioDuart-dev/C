#include <stdio.h>
#include <string.h>

int main()
{
    int linhas;
    printf("Digite o número de linhas: ");
    scanf("%d", &linhas);
    getchar();

    char str[100][100];
    for(int i = 0; i < linhas; i++)
    {
        printf("Digite a linha %d: ", i + 1);
        fgets(str[i], 100, stdin);
    }

    for(int i = 0; i < linhas; i++)
    {
        int comprimento_maximo = 0;
        int indice_inicio = 0;
        int indice_fim = 0;
        int comprimento_atual = 0;

        for (int j = 0; j <= strlen(str[i]); j++)
        {
            if (str[i][j] == ' ' || str[i][j] == '\n' || str[i][j] == '\0')
            {
                if (comprimento_atual > comprimento_maximo)
                {
                    comprimento_maximo = comprimento_atual;
                    indice_inicio = indice_fim - comprimento_atual;
                    indice_fim = j;
                }
                comprimento_atual = 0;
            }
            else
            {
                if (comprimento_atual == 0)
                    indice_inicio = j;
                comprimento_atual++;
                indice_fim = j + 1;
            }
        }

        if (comprimento_maximo > 0)
        {
            printf("Maior palavra da linha %d: ", i + 1);
            for (int k = indice_inicio; k < indice_fim; k++)
            {
                printf("%c", str[i][k]);
            }
            printf("\n");
        }
        else
        {
            printf("Linha %d vazia.\n", i + 1);
        }
    }

    return 0;
}
