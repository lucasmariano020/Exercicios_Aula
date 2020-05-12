#include <stdio.h>
#include <string.h>

int main()
{
 int L,i,j;  //declaração de variáveis
 char op[5];
 double M[12][12],soma=0;  
 
 scanf("%d",&L); //escaneamento da linha a ser considerada da matriz
 scanf("%s",&op); //escaneamento do tipo de operação a ser realizada
 for (i=0;i<12;i++) //preenchimento da matriz M
  {
   for (j=0;j<12;j++)   
     scanf("%lf",&M[i][j]); 
  }
 for (j=0;j<12;j++) //soma dos elementos da linha especificada da matriz 
   soma=soma+M[L][j]; 
    
 if (op[0] == 'M') //se a operação for média, divide a soma dos elementos pelo número de elementos
   soma=soma/12.0;
   
 printf("%.1lf\n",soma); //imprime o valor armazenado na variável soma
 return 0;
}
