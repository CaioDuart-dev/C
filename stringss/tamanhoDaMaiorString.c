#include <stdio.h>
int main()
{
    char string[100];
    int linhas;
    int i;
    int maior = 0;
    int tamanho = 0;

    scanf("%d", &linhas);
    for(i = 0; i < linhas; i++)
    {
        scanf("%s", string);
    while (string[tamanho] != '\0')
    {
        tamanho++;
    }
    if (tamanho > maior)
    {
        maior = tamanho;
    }
    }
    printf("%d\n", maior);

    return 0;
}