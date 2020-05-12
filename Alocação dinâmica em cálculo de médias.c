//Calcula area e perimetro de circulo

#include <stdio.h>  
#include <stdlib.h>

int main()
  {
  	int alunos, i;
  	float *vetorNota, media = 0;
  	
  	printf("Digite a quantidade de alunos que terao suas medias calculadas: ");
  	scanf("%d", &alunos);
  	setbuf(stdin, NULL);
	vetorNota = malloc(alunos*sizeof(float));
	
	for(i = 0; i < alunos; i++)
	   {
	    printf("\nDigite agora a nota do aluno %d: ", i+1);
	 	scanf("%f", &vetorNota[i]);
	 	setbuf(stdin, NULL);
       }
       
	for(i = 0; i < alunos; i++)
	   media = vetorNota[i] + media;
	 
	media = (media/alunos);
	printf("\nA media entre as notas eh: %.3f", media);
	
	return 0;
  }
