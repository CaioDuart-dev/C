#include <stdio.h>
#include <string.h>
int main() 
{
    char num[101];
    int count = 0; //contador de palavras

    while (scanf("%s", num) != EOF) //recebe as palavras até o final do arquivo, ou melhor ctrl+z
    {
        count++;
    }

    printf("%d\n", count); //printa a quantidade de palavras.

    return 0;
}
