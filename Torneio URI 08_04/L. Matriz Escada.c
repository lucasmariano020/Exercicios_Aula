#include <stdio.h>

int main()
{
  //Declara��o de variaveis
 long int i, j, linhas, colunas;
 long int k, M[700][700], cont, key=0, stop=0;

  //Leitura do numero de linhas e colunas da matriz
 scanf("%ld %ld",&linhas,&colunas);

  for (i=1;i<=linhas;i++)
  {
    for (j=1;j<=colunas;j++)        
     scanf("%ld",&M[i][j]);  //Leitura do valor em cada localiza��o da matriz
  }
  for (i=1;i<=linhas;i++)
  {
    cont=0;
    for (j=1;j<=colunas;j++)
    { 
      if (M[i][j]==0 && key==0)  //An�lise para averiguar se a linha toda � preenchida por 0
	    {
       cont++;  
       if (cont==colunas)
	     stop=1;                  //Se for, stop recebe 1 
      }
	    else                         //Se o elemento da matriz for diferente de 0
	    {              
        if (stop==1)          // E, ainda, alguma linha antes analisada j� tiver sido completamente preenchida por 0,
	      {                      //o programa � encerrado e a chave recebe 1 pois, n�o ser� uma matriz escada.
        key=1;
        break;               
        }
        for (k=i+1;k<=linhas;k++)  //Analise para averiguar se em todas as linhas de abaixo da linha i, os valores s�o diferentes de 0
	      {
          if (M[k][j]!=0)       //Se forem, n�o � uma matriz escada e a chave recebe 1.
		      {
          key=1;
          break;         
          }               
        }
      i++;                  //incremento da linha para cada vez que todas os valores, na mesma coluna, abaixo do valor analisado, forem 0.     
      }   
    }         
  } 
  if (key==1)                //se a chave tiver recebido o valor de 1 durante o programa, � impresso que n�o � uma matriz escada
   printf("N\n");       
  else                       //Caso contr�rio, � impresso que � uma matriz escada
   printf("S\n"); 

  return 0;
}
