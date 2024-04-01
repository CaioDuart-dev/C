#include <stdio.h>

int main() {
    int linhasS, linhasP;
    scanf("%d %d", &linhasS, &linhasP);

    char S[10000][81]; // matriz para armazenar a sequência S
    char P[10000][81]; // matriz para armazenar a sequência P

    // Lendo a sequência S
    for (int i = 0; i < linhasS; i++) {
        scanf("%s", S[i]);
    }

    // Lendo a sequência P
    for (int i = 0; i < linhasP; i++) {
        scanf("%s", P[i]);
    }

    // Verificando se alguma palavra de P existe na sequência S
    int encontrou = 0;
    for (int i = 0; i < linhasP; i++) {
        int j;
        for (j = 0; j < linhasS; j++) {
            int k;
            for (k = 0; S[j][k] != '\0' && P[i][k] != '\0'; k++) {
                if (S[j][k] != P[i][k]) {
                    break;
                }
            }
            if (S[j][k] == '\0' && P[i][k] == '\0') {
                encontrou = 1;
                break;
            }
        }
        if (encontrou) {
            break;
        }
    }

    // Imprimindo o resultado
    printf("%d\n", encontrou);

    return 0;
}
