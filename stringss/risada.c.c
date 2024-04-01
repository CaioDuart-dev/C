#include <stdio.h>
#include <string.h>

int main()
{
    char risada[101];
    int contador = 0;
    int contador2 = 0;
    int len = 0;
    char reverso[101];
    char vogais[101];
    scanf("%s", risada); // ler teclado

    while (risada[len] != '\0') // achar o tamanho e o final da string.
    {
        len++;
    }
    int k = 0;
    int i;
    for (i = 0; risada[i] != '\0'; i++) // verificar se da esquerda para direita é vogal e atualizar o contador.
    {
        if (risada[i] == 'a' || risada[i] == 'e' || risada[i] == 'i' || risada[i] == 'o' || risada[i] == 'u')
        {
            vogais[k] = risada[i];  //acumula as vogais em outra string
            k++;
            contador = 1; // tem vogal.
        }
    }
    if (contador == 0) // se o contador for 0, não tem vogal, logo printa valor invalido.
    {
        printf("Valor invalido!\n");
        return 0; 
    }

    int j;
    int l = 0;
    if (contador == 1) // se tem vogal agora é só conferir se de trás pra frente é igual.
    {
        for (j = len - 1; j >= 0; j--)  // começando pelo final da string com  o tamanho 
        {
            if (risada[j] == 'a' || risada[j] == 'e' || risada[j] == 'i' || risada[j] == 'o' || risada[j] == 'u')
            {
                reverso[l] = risada[j]; // acumular as letras reversas em outra string
                contador2 = 1;           //se o segundo contador for 1 é pq ele achou vogais.
                l++;
            }
        }
        if (contador2 >= 1)
        {
            reverso[l] = '\0'; // adicionar o caractere nulo no final da string reverso
            if (strcmp(vogais, reverso) == 0)     // se as duas strings tiverem tamanhos iguais 
            {
                printf("S\n");
            }
            else
            {
                printf("N\n");
            }
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}