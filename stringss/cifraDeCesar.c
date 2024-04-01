#include <stdio.h>

int main()
{
    int linhas;
    char palavras[1001];

    scanf("%d\n", &linhas); // ler a qtd de linhas

    for(int i = 0; i < linhas; i++)   //criar linhas e inserir palavras.
    { 
        fgets(palavras, 1001, stdin); //ler o teclado para receber as palavras.
        
        for(int j = 0; palavras[j] != '\0'; j++) //loop para passar de caracter em caracter
        {
            if(palavras[j] >= 65 && palavras[j] <= 90) // se o caracter estiver no alfabeto ele recebe mais ou menos 13
            {
                if(palavras[j] <= 77) //se ele estiver antes da metade do alfabeto ele ganha 13
                {
                    palavras[j]+=13;
                }
                else if(palavras[j] >= 77) //se estiver depois da metade, perde 13
                {
                    palavras[j]-=13;
                }
            }
        
        }
        printf("%s\n",palavras); // imprime a frase com as palavras trocadas.
    }
    
}
