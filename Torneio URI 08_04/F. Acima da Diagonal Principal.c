#include <stdio.h>

int main()
{
 char op[5];                //declara��o das vari�veis
 double M[12][12],soma=0;
 int i,j;
 scanf("%s",&op);
 
 for (i=0;i<12;i++) //condi��o para preenchimento da matriz M
  {
   for (j=0;j<12;j++)
   {
    scanf("%lf",&M[i][j]);
    if (j>i)  //condi��o para somar somente os elementos da matriz M acima da diagonal principal
     {
      soma=soma+M[i][j];  //soma dos elementos especificados
     }
   }
  }
 if (op[0]== 'M') //se a opera��o escolhida for a m�dia, ent�o divide a soma dos elementos pelo n�mero de elementos
    soma=soma/66;
    
 printf("%.1lf\n",soma);  //imprime o valor da opera��o feita com a parte da matriz M acima da diagonal principal
 return 0;
}
