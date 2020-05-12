#include <stdio.h>

int main()
{
  //Declaração de variaveis
 long int i, j, linhas, colunas;
 long int k, M[700][700], cont, key=0, stop=0;

  //Leitura do numero de linhas e colunas da matriz
 scanf("%ld %ld",&linhas,&colunas);

  for (i=1;i<=linhas;i++)
  {
    for (j=1;j<=colunas;j++)        
     scanf("%ld",&M[i][j]);  //Leitura do valor em cada localização da matriz
  }
  for (i=1;i<=linhas;i++)
  {
    cont=0;
    for (j=1;j<=colunas;j++)
    { 
      if (M[i][j]==0 && key==0)  //Análise para averiguar se a linha toda é preenchida por 0
	    {
       cont++;  
       if (cont==colunas)
	     stop=1;                  //Se for, stop recebe 1 
      }
	    else                         //Se o elemento da matriz for diferente de 0
	    {              
        if (stop==1)          // E, ainda, alguma linha antes analisada já tiver sido completamente preenchida por 0,
	      {                      //o programa é encerrado e a chave recebe 1 pois, não será uma matriz escada.
        key=1;
        break;               
        }
        for (k=i+1;k<=linhas;k++)  //Analise para averiguar se em todas as linhas de abaixo da linha i, os valores são diferentes de 0
	      {
          if (M[k][j]!=0)       //Se forem, não é uma matriz escada e a chave recebe 1.
		      {
          key=1;
          break;         
          }               
        }
      i++;                  //incremento da linha para cada vez que todas os valores, na mesma coluna, abaixo do valor analisado, forem 0.     
      }   
    }         
  } 
  if (key==1)                //se a chave tiver recebido o valor de 1 durante o programa, é impresso que não é uma matriz escada
   printf("N\n");       
  else                       //Caso contrário, é impresso que é uma matriz escada
   printf("S\n"); 

  return 0;
}
