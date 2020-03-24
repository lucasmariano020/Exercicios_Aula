#include <stdio.h>
int main()
   {
     double A = 0;
     double B = 0;
     double C = 0;
     double TRIANGULO = 0;
     double CIRCULO = 0;
     double TRAPEZIO = 0;
     double QUADRADO = 0;
     double RETANGULO = 0;
     
     scanf("%lf%lf%lf", &A, &B, &C);
     
     TRIANGULO = ((A*C)/2);
     CIRCULO = (3.14159*(C*C));
     TRAPEZIO = (((A+B)*C)/2);
     QUADRADO = (B*B);
     RETANGULO = (A*B);
     
     printf("TRIANGULO: %.3lf\n", TRIANGULO);
     printf("CIRCULO: %.3lf\n", CIRCULO);
     printf("TRAPEZIO: %.3lf\n", TRAPEZIO);
     printf("QUADRADO: %.3lf\n", QUADRADO);
     printf("RETANGULO: %.3lf\n", RETANGULO);
     
     return(0);
   }
