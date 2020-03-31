#include <stdio.h>
#include <stdlib.h>
int main()
  {
   #define TAM 20
   float vet[TAM], maior;
   int i = 0;
   for(i == 0; i < TAM; i++)
    {
    	vet[i] = (rand() % 20);
    	if(vet[i] > vet[i-1])
    	 	maior = vet[i];
		 
    	printf("%0.2f\n", vet[i]);
    	
	}
   printf("O maior numero armazenado no vetor eh %0.2f\n", maior);
  }
