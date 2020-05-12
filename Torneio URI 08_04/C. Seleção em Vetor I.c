#include <stdio.h>
int main()
 {
 	float A[100], x; //definição das variáveis
 	int i = 0;
 	
 	for(i == 0; i < 100; i++) //parâmetros para a composição do vetor A
 	 {
 	 	scanf("%f", &A[i]); //preechimento do vetor A
 	 	x = A[i];
 	 	if(x <= 10)  //condição para impressão de um elemento do vetor A
 	 	 printf("A[%d] = %0.1f\n", i, x); 
	 }
	return 0;
 }
