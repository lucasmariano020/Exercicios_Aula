#include <stdio.h>
int main()
{
 char op[5];                 //declaração das variáveis
 double M[12][12],soma=0;
 int i,j;
 
 scanf("%s",&op);  //escaneamento do tipo de operação a ser realizada                
 for (i=0;i<12;i++)  //preenchimento da matriz M
  {
   for (j=0;j<12;j++)
    {
     scanf("%lf",&M[i][j]); //escaneamento do elemento na posição [i][j] de M
     if (j>i && i+j>11) //condição para somar os elementos a direita da matriz dentro da área verde especificada
        soma=soma+M[i][j]; //somaa os elementos  da área
    }
  }
  if (op[0]== 'M')  //se a operação selecionada for a média, divide a soma pelo número de elemntos
    soma=soma/30;
    
 printf("%.1lf\n",soma); //imprime o valor da operação feita com a parte verde especificada da matriz M 
 return 0;
}
