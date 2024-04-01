#include <stdio.h>

struct tipoFiliacao // Struct que armazena as informações da filiação.
{
    char nome[80];     // Pedro
    char nomeMae[80];  // Maria
    char nomePai[80];  // Gui
};
struct tipoFiliacao separaLinhaCSV(char linha[240])
{
    struct tipoFiliacao familia;
    sscanf(linha, "%[^,], %[^,], %[^\n]", familia.nome, familia.nomeMae, familia.nomePai);
    return familia;
}
