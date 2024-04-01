#include <stdio.h>

    struct tipoLogradouro
{
    char tipo[80]; //rua
    char nome[80]; //afonso
    char complemento[80]; // loja b
};
    void criaLinhaCSV ( struct tipoLogradouro info, char linha[240]) // rua ; afonso ; loja b
{
    int aux =0;
    int i=0;
    for (i = 0; info.tipo[i] != '\0'; i++)
    {
        linha[aux] = info.tipo[i];
        aux++;
    }
    linha[aux] = ';';
    aux++;
    for (i = 0; info.nome[i] != '\0' ; i++)
    {
        linha[aux] = info.nome[i];
        aux++;
    }
    linha[aux] = ';';
    aux++;
    for (i = 0; info.complemento[i] != '\0'; i++)
    {
        linha[aux] = info.complemento[i];
        aux++;
    }
    linha[aux] ='\0';
    printf("%s", linha);
    //return linha;
}

int main()
{
    struct tipoLogradouro info;

        fgets(info.tipo,80,stdin);

        fgets(info.nome,80,stdin);

        fgets(info.complemento, 80,stdin);

    char linha[240]; //null
    criaLinhaCSV (info, linha);
}