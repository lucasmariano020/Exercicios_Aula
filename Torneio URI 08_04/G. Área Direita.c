#include <stdio.h>
int main()
{
 char op[5];                 //declara��o das vari�veis
 double M[12][12],soma=0;
 int i,j;
 
 scanf("%s",&op);  //escaneamento do tipo de opera��o a ser realizada                
 for (i=0;i<12;i++)  //preenchimento da matriz M
  {
   for (j=0;j<12;j++)
    {
     scanf("%lf",&M[i][j]); //escaneamento do elemento na posi��o [i][j] de M
     if (j>i && i+j>11) //condi��o para somar os elementos a direita da matriz dentro da �rea verde especificada
        soma=soma+M[i][j]; //somaa os elementos  da �rea
    }
  }
  if (op[0]== 'M')  //se a opera��o selecionada for a m�dia, divide a soma pelo n�mero de elemntos
    soma=soma/30;
    
 printf("%.1lf\n",soma); //imprime o valor da opera��o feita com a parte verde especificada da matriz M 
 return 0;
}
