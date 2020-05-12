#include <stdio.h>
int main()
 {
	 int i,pi = 1,k,p = 0,n,impar[6],par[6],im = 0,ii = 1; //declaração das variáveis
	 
	 for(i=1;i<=15;i++) //parâmetros para a composição dos vetores par e ímpar
	 {
	  scanf("%d",&n); //escaneamento dos 15 valores a serem classificados
	  if (n%2==0) //condição para armazenar o valor no vetor par
	   {
	     par[pi]=n; 
	     p++;  //incremento na variável de tamanho do vetor par
	     pi++; //incremento para troca de posição no vetor par
	   } 
	  else
	   {  //condição para armazenar valor no vetor ímpar
	    impar[ii]=n;
	    im++;  //incremento na variável de tamanho do vetor ímpar
	    ii++;  //incremento para troca de posição no vetor ímpar
	   }    
	  if (p==5) //condição para imprimir os 5 primeiros valores acumulados no vetor par
	   {
	    for (k=1;k<=5;k++)
	     {
	      printf("par[%d] = %d\n",(k-1),par[k]);
	      pi=1; //redefinição de valores das variáveis auxiliares para reinício do processo
	      p=0;
	     }
	   }
	  if (im==5) //condição para imprimir os 5 primeiros valores acumulados no vetor par
	   {
	    for (k=1;k<=5;k++)
	 	 {
	      printf("impar[%d] = %d\n",(k-1),impar[k]);
	      ii=1;  //redefinição de valores das variáveis auxiliares para reinício do processo
	      im=0;
	     }    
	   }
	  }
	
	for (k=1;k<=im;k++)  //parâmetros para imprimir o restantes dos valores alocados no vetor impar
	  printf("impar[%d] = %d\n",(k-1),impar[k]); 
	
	for (k=1;k<=p;k++)  //parâmetros para imprimir o restantes dos valores alocados no vetor impa
	  printf("par[%d] = %d\n",(k-1),par[k]);
	
	return 0;	
  }
