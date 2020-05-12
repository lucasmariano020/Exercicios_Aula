#include <stdio.h>
#include <math.h>

int main()
{           //Declaração das variáveis
 long long int i,j,z,n,T = 0, x =4;
 unsigned long long int valor, linha, coluna, vazios = 0, P[40][40], M[40][40], contadigitos[40][40], maior[40];
 scanf("%lld",&n);
 
 for (z=1;z<=n;z++)
  {
    scanf("%lld",&T); //leitura do numero de matrizes
    for (linha=1;linha<=T;linha++)    
	 {  
      for (coluna=1;coluna<=T;coluna++)
	   {
        contadigitos[linha][coluna]=0;  
        scanf("%llu",&M[linha][coluna]);        //leitura do valor naquele espaço da matriz
        P[linha][coluna]=pow(M[linha][coluna],2);  //o valor a matriz potence p recebe o valor lido anteriormente ao quadrado
        valor=P[linha][coluna];                    //uma variavel generica para a contagem de digitos do valor recebe o valor da potência
        if (valor==0)                         //////
		  contadigitos[linha][coluna]=1;            //
        else                                    //
		 {                                          //
          while (valor!=0)                      //  Estrutura para fazer a contagem do numero de digitos do valor 
   		   {                                      //  contadigitos é uma outra matrz, que tem a função de armazenar os valores dos numeros de digitos 
            contadigitos[linha][coluna]++;      //de cada potência calculada anteriormente
            valor=valor/10;                     //
           }                                    //
         }                                    //////
       }
	 }

   for (j=1;j<=T;j++)
    {
     for (i=1;i<=T;i++)
	  {
       if (i==1)
	     maior[j]=contadigitos[i][j];             
       else
	    {                                           //  estrutura para ver o maior valor de digitos de cada coluna 
         if (contadigitos[i][j]>maior[j])         //para alinhar a coluna tomando como referência esse valor.
           maior[j]=contadigitos[i][j];
        }
      }
    }
    
   printf("Quadrado da matriz #%lld:\n",x);
   x++; 
   
   for (linha=1;linha<=T;linha++)
	{ 
     for (coluna=1;coluna<=T;coluna++)
      {
       vazios=maior[coluna]-contadigitos[linha][coluna];         // estrutura de repetição pra imprimir uma quantidade de espaÃ§os vázios 
       for (i=1;i<=vazios;i++)                                   //sendo ela categorizada pela diferença entre o maior elemento da coluna 
  	    {                                                        //e o valor analizado naquele i e j.
	     printf(" ");
	    }
       printf("%llu ",P[linha][coluna]);                         // impressão do valor da matriz de quadrados
	  }
     printf("\n");
    }   	
  }   
}
