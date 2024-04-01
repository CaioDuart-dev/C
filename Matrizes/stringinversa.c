#include <stdio.h>

int main()
{
    char text[100];
    fgets(text, 100, stdin);

    int tamanho = 0;
    for (int i = 0; text[i] != '\0'; i++)
    {
        tamanho++;
    }
    
    int j = 0;
    char trocada[100];
    for (int i = tamanho - 1; i >= 0; i--)
    {
        trocada[j] = text[i];
        j++;
    }
    for (int i = 0; trocada[i] != '\0'; i++)
    {
        if (trocada[i] >= 'a' && trocada[i] <= 'z')
        {
            trocada[i] -= 32;
        }
        else if (trocada[i] >= 'A' && trocada[i] <= 'Z')
        {
            trocada[i] += 32;
        }
    }

    printf("%s", trocada);

    return 0;
}
