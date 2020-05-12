#include <stdio.h>
#include <stdlib.h>
 	int maior, maiorNota = 0;
    int calculaMaior (int a, int b); 
    
int main()
 {
 	srand(time(NULL));
 	int aluno[10], i;

 	
 	typedef struct
 	 {
 	 	int id;
 	 	int nota;
	  }avaliacao;
	
	for(i = 0; i < 10; i++)
	 {
	 	avaliacao aluno[i];
	 	aluno[i].id = (rand() % 11);
	 	aluno[i].nota = (rand() % 11);
		printf("aluno[%d]: id = %d, nota = %d\n", i, aluno[i].id, aluno[i].nota); 
		maiorNota = calculaMaior(aluno[i].nota, maiorNota);		
	 }
	 printf("Maior nota = %d", maiorNota);
 }
 
int calculaMaior (int a, int b)
 {
  if(a >= b)
 	maior = a;
 else
   	maior = b;
 return (maior);
 }
