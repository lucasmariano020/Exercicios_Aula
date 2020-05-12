#include <stdio.h>
#include <math.h>
#define Pi 3.1415926535897
int main()
{
 double a,b,c,p,at,rint,rext,sun,roses,viol;  //declara��o das vari�veis
 while(scanf("%lf %lf %lf",&a,&b,&c) != EOF)  //condi��o para que os c�lculos continuem 
  {
   p = ( a + b + c)/2;   //c�lculo da metade do per�metro do tri�ngulo
   at = sqrt(p*(p-a)(p-b)(p-c));  //c�lculo da �rea do tri�ngulo com a f�rumla de Heron
   rint = at/p;                     //calcula o raio do c�rculo interno
   rext = (a*b*c) /( 4*at );        //cacula o raio do circulo externo
   sun = ( Pi*( rext*rext ) ) - at;   //calcula a �rea correspondente aos girass�is
   roses = ( rint*rint )*Pi;     //calcula a �rea correspondente �s rosas
   viol = at-roses;   //calcula a �rea correspondente �s violetas
   printf("%.4lf %.4lf %.4lf\n", sun,viol,roses); //imprime as tr�s �reas calculadas anteriormente
  }
}
