#include <stdio.h>
int main()
{
    char frase[101];
    int qtd = 0; // iniciar em 0

    while(scanf("%s", frase)!= EOF) //enquanto não aparecer um ctrl+z, o teclado será lido.
    {
        for (int i = 0; frase[i] != '\0'; i++) //enquanto a string não terminar ele vai rodar o loop
        {
            if (frase[i]== 'o')
            {
                qtd++; // toda vez que aparece um 'o', qtd ganha +1
            }
        }
    }
    printf("%d\n", qtd); //vai imprimir a qtd de 'o' conforme o acumulado dentro do for.

    return 0;
}