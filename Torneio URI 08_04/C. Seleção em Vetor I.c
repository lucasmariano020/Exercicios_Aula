#include <stdio.h>
int main()
 {
 	float A[100], x; //defini��o das vari�veis
 	int i = 0;
 	
 	for(i == 0; i < 100; i++) //par�metros para a composi��o do vetor A
 	 {
 	 	scanf("%f", &A[i]); //preechimento do vetor A
 	 	x = A[i];
 	 	if(x <= 10)  //condi��o para impress�o de um elemento do vetor A
 	 	 printf("A[%d] = %0.1f\n", i, x); 
	 }
	return 0;
 }
