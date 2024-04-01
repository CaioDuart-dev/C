#include <stdio.h>

int main() {
    int linhas, colunas;

    scanf("%d %d", &linhas, &colunas);
    getchar(); // Recolher \n

    char caracter[500];
    int numero[500];
    int i = 0;
    while (scanf(" %c%d", &caracter[i], &numero[i]) != EOF) { // Enquanto a frase não receber CTRL+Z, estará recebendo os caracteres
        i++;
    }

    
    char letra = 'A' + linhas - 1; // Série de letras que serão as letras para designar os assentos

    printf(" ");
    for (int j = 0; j < colunas; j++) {
        printf(" %02d", j+1); // Criar a linha de números dos assentos
    }

    printf("\n");

    for (int j = linhas - 1; j >= 0; j--) {
        printf("%c ", letra--); // Criar a coluna de letras dos assentos
        for (int k = 0; k < colunas; k++) 
        {
            int ocupado = 0;
            for (int l = 0; l < i; l++) {
                if (caracter[l] == 'A' + j && numero[l] == k+1) {
                    ocupado = 1;
                    break;
                }
            }
            
            if (ocupado) {
                printf("XX ");
            } else {
                printf("-- ");
            }
        }
        printf("\n");
    }

    return 0;
}
