#include <stdio.h>
#include <string.h>

    int main(){

        int n;
        scanf("%d\n", &n);

        char texto[n+1][1000];

        int vet[n+1];
        for(int i=1; i<=n; i++){
            gets(texto[i]);
            vet[i]=strlen(texto[i]);
        }

        int l, c;
        scanf("%d %d", &l, &c);

        char letra;
        while(scanf(" %c", &letra) != EOF){
            if(letra=='j' && l<n){
                l++;
            }
               else if (letra=='k' && l>1){
                l--;
            }

            if(vet[l]<c){
              printf("%d %d %c\n", l, vet[l], texto[l][vet[l]-1]);
            }
                else{
                    printf("%d %d %c\n", l, c, texto[l][c-1]);
                }
        }
    
    return 0;
    }