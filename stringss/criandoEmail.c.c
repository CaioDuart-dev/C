#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char nome[101];
    char ultnome[101], ultimo[101];
    char pnome[101];
    int i;
    int tamanho= 0;

    scanf("%[^\n]s", nome);// ler o teclado.

    while(nome[tamanho] != '\0') //encontrar tamanho.
    {
        tamanho++;
    }

    for ( i = 0; nome[i] != ' '; i++)//pegar primeiro nome, iniciando o membro em zero, com a condiçãp de parar no espaço.
    {
        pnome[i] = tolower(nome[i]); //cada caracter absorvido por membro será passado para pnome[i], em minusculo com a função tolower
    }
    
    pnome[i]= '\0'; //terminar pnome, para conseguir rodar
    int j =0;
    for(i = tamanho -1; nome[i] != ' '; i-- )//pegar ultimos caracteres de trás para frente até o espaço.
    {
        ultnome[j] = tolower(nome[i]);
        j++;      //ultnome começa em zero, ao incrementar ele vai ir passando os memebros e recebendo os caracteres
    }
    ultnome[j] = '\0'; //terminar o arquivo para rodar

    int k = 0;
    for(i = j-1; ultnome[i] != '\0'; i--) //converter de trás para frente o sobrenome
    {
        ultimo[k] = ultnome[i];
        k++; //começa em zero e vai sendo incrementado para receber os outros caracteres
    }
    ultimo[k] = '\0'; //terminar o arquivo para rodar

    printf("%s.%s@unb.br\n", pnome, ultimo); //imprimir conforme o pedido pela tarefa.

    return 0;
}  