#include <stdio.h>
int main()
 {
	 int i,pi = 1,k,p = 0,n,impar[6],par[6],im = 0,ii = 1; //declara��o das vari�veis
	 
	 for(i=1;i<=15;i++) //par�metros para a composi��o dos vetores par e �mpar
	 {
	  scanf("%d",&n); //escaneamento dos 15 valores a serem classificados
	  if (n%2==0) //condi��o para armazenar o valor no vetor par
	   {
	     par[pi]=n; 
	     p++;  //incremento na vari�vel de tamanho do vetor par
	     pi++; //incremento para troca de posi��o no vetor par
	   } 
	  else
	   {  //condi��o para armazenar valor no vetor �mpar
	    impar[ii]=n;
	    im++;  //incremento na vari�vel de tamanho do vetor �mpar
	    ii++;  //incremento para troca de posi��o no vetor �mpar
	   }    
	  if (p==5) //condi��o para imprimir os 5 primeiros valores acumulados no vetor par
	   {
	    for (k=1;k<=5;k++)
	     {
	      printf("par[%d] = %d\n",(k-1),par[k]);
	      pi=1; //redefini��o de valores das vari�veis auxiliares para rein�cio do processo
	      p=0;
	     }
	   }
	  if (im==5) //condi��o para imprimir os 5 primeiros valores acumulados no vetor par
	   {
	    for (k=1;k<=5;k++)
	 	 {
	      printf("impar[%d] = %d\n",(k-1),impar[k]);
	      ii=1;  //redefini��o de valores das vari�veis auxiliares para rein�cio do processo
	      im=0;
	     }    
	   }
	  }
	
	for (k=1;k<=im;k++)  //par�metros para imprimir o restantes dos valores alocados no vetor impar
	  printf("impar[%d] = %d\n",(k-1),impar[k]); 
	
	for (k=1;k<=p;k++)  //par�metros para imprimir o restantes dos valores alocados no vetor impa
	  printf("par[%d] = %d\n",(k-1),par[k]);
	
	return 0;	
  }
