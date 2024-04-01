#include <stdio.h>
#include <string.h>
struct tipoMusica
{
    char nome[80]; //nome da musica
    int ano; //ano da musica
};
struct tipoBanda
{
    char nome[80]; //banda
    int qtd; //quantidade de musicas
    struct tipoMusica musicas[100];
};
void pesquisarNomeMusica (char pesquisa [80] , struct tipoBanda bandas[50] , int n ) //pesquisa , cadastro das bandas, qtd de bandas que foram cadastradas.
{
    int verificador = 0; //verificador, se achar a musica deixa de ser 0.
    for ( int i = 0; i < n; i++) //primeiro for para qnd acessar as bandas fazer a verificação de acordo com a qtd de bandas cadastradas
    {
        for (int j = 0; j < bandas[i].qtd; j++) //segundo for para qnd for acessar as musicas fazer a contagem de acordo com a qtd de musicas cadastradas.
        {
            if(strcmp(bandas[i].musicas[j].nome, pesquisa)== 0)
            {
                printf("%s : ano %d\n", bandas[i].nome, bandas[i].musicas[j].ano); 
                verificador++; //achou a musica 
            }
        }
    }
    if (verificador == 0)//se não achou, é pq a musica não está cadastrada.
    {
        printf("Musica nao cadastrada\n");
    }
}
int main()
{
    char pesquisa[80]; 
    printf("pesquisar musicas nos cadastros:\n");
    scanf("%[^\n]s", pesquisa); 

    int n; //qtd de bandas a serem cadastradas.
    printf("quantidade de bandas a serem cadastradas:\n");
    scanf("%d", &n);
    struct tipoBanda bandas[50];

    printf("cadastrar banda e quantidade de musicas:\n");
    for (int i = 0; i < n; i++) //enquanto for i for menor ou igual que a qtd de musicas cadastradas, pode ser inserido as bandas e suas qtds de musicas
    {
        scanf("%s", bandas[i].nome); //ler de banda que serão cadastradas.
        scanf("%d", &bandas[i].qtd); //quantidade de musicas pra cada banda.
    }
    printf("cadastrar musicas e os seus anos\n");    
    for (int i = 0; i < bandas[i].qtd; i++) //enquanto i for menor ou igual que a quantidade de musicas, pode-se cadastrar as musicas.
    {
        scanf("%s", bandas[i].musicas[i].nome);
        scanf("%d", &bandas[i].musicas[i].ano);
    }

    pesquisarNomeMusica (pesquisa, bandas, n );
    return 0;
}