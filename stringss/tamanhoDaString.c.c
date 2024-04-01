#include <stdio.h>

int main() {
   char string[1001];
   int tamanho = 0;
   
   // lê a string da entrada usando do-while
   scanf("%s", string);
   while (string[tamanho] != '\0')
   {
      tamanho++;
   }
   printf("%d\n", tamanho);  // imprime o tamanho da string
   
   return 0;
}
