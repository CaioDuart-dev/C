#include <stdio.h> 
#include <math.h>
    struct tipoPonto
    {
        int x;
        int y;
    };
    double distancia ( struct tipoPonto pa , struct tipoPonto pb)
    {
        double D = sqrt(((pb.x - pa.x)*(pb.x - pa.x))+((pb.y - pa.y)*(pb.y - pa.y)));
        return D;
    }
// int main()
// {
//     struct tipoPonto pa, pb;
//     scanf("%d", &pa.x);
//     scanf("%d", &pa.y);

//     scanf("%d", &pb.x);
//     scanf("%d", &pb.y);

//     printf("X: %d e y: %d no ponto A\n", pa.x,pa.y);
//     printf("X: %d e y: %d no ponto b\n", pb.x,pb.y);

//     double resultado = distancia(pa , pb);
//     printf("distancia entre os pontos: %lf", resultado);
//     return 0;
// }