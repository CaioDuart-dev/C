
#include <stdio.h>

struct tipoFiliacao //struct que armazena as informações da filiacao.
{
    char nome[80]; // pedro (\0)            
    char nomeMae[80];  // maria
    char nomePai[80]; //gui
};
//pedro , maria , gui
struct tipoFiliacao separaLinhaCSV(char linha[240]) // pedro [,] maria , gui
{ 
    int aux =0;

    struct tipoFiliacao familia;
    //filho
    int i;
    for ( i = 0; linha[i] != ','; i++)       //aux= 8
    {
        familia.nome[aux]= linha[i];          
        aux++;
    }
    familia.nome[aux] = '\0';
    //mae
    int j=0;
    for (int i = aux+1; linha[i] != ','; i++)
    {
        familia.nomeMae[j] = linha[i];
        j++;
        aux++;
    }
    familia.nomeMae[j] = '\0';
    //pai
    int k=0;
    for (int i = aux+2; linha[i] != '\0'; i++)
    {
        familia.nomePai[k] = linha[i];
        k++;
    }
    familia.nomePai[k] = '\0';
    
    return familia; 
}

int main()
{
    char linha[240];
    fgets(linha, 240, stdin);
    struct tipoFiliacao res = separaLinhaCSV(linha);

    printf("%s\n", res.nome);
    printf("%s\n", res.nomeMae);
    printf("%s\n", res.nomePai);
}
