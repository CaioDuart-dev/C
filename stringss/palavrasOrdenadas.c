#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavra[101];
    int linhas;
    int tamanho;

    scanf("%d", &linhas); //ler as linhas

    for (int i = 0; i < linhas; i++) //loopp para ler o teclado nas linhas
    {
        scanf("%s", palavra); //ler o teclado

        tamanho = strlen(palavra); //achar o tamanho e o final da string.
        int ordenada = 1; //verificador de ordenada, 1 para se for, e 0 para se n for.
        int j = 1;

        while (j < tamanho && ordenada == 1) //enquanto o indice for menor q o final da string e a for ordenada
        {
            if (tolower(palavra[j]) < tolower(palavra[j - 1])) //se o caracter da palavra for menor q ele outro pela tabela ascii
            {
                ordenada = 0; // n é ordenado
            }
            else if (tolower(palavra[j]) == tolower(palavra[j - 1])) //se o valor for igual
            {
                j++;
                ordenada = 0; //tbm n é ordenado
            }
            j++; //roda o loop
        }

        if (ordenada == 1) //printa O para se for ordenada
        {
            printf("%s: O\n", palavra);
        }
        else  //se não, printa N
        {
            printf("%s: N\n", palavra);
        }
    }

    return 0;
}
