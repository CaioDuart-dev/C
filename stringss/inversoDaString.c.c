#include <stdio.h>

int main() {
   char string[1001];
   int tamanho, i;
   
   // lê a string da entrada
   scanf("%s", string);
   
   // calcula o tamanho da string
   tamanho = 0;
   while (string[tamanho] != '\0') {
      tamanho++;
   }
   
   // imprime a string invertida
   for (i = tamanho - 1; i >= 0; i--) {
      printf("%c", string[i]);
   }
   printf("\n");
   
   return 0;
}
