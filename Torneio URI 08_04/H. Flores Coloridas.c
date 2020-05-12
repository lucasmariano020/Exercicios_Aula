#include <stdio.h>
#include <math.h>
#define Pi 3.1415926535897
int main()
{
 double a,b,c,p,at,rint,rext,sun,roses,viol;  //declaração das variáveis
 while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)  //condição para que os càlculos continuem 
  {
   p = ( a + b + c)/2;   //cálculo da metade do perímetro do triângulo
   at = sqrt(p*(p-a)(p-b)(p-c));  //cálculo da área do triângulo com a fórumla de Heron
   rint = at/p;                     //calcula o raio do círculo interno
   rext = (a*b*c) /( 4*at );        //cacula o raio do circulo externo
   sun = ( Pi*( rext*rext ) ) - at;   //calcula a área correspondente aos girassóis
   roses = ( rint*rint )*Pi;     //calcula a área correspondente às rosas
   viol = at-roses;   //calcula a área correspondente às violetas
   printf("%.4lf %.4lf %.4lf\n", sun,viol,roses); //imprime as três áreas calculadas anteriormente
  }
}
