//inclusao das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
 {
 	typedef struct  //Definição da sctruct com as coordenadas x, y e z
 	  {
 	  	int x; 
 	  	int y;
 	  	int z;
	  }Point;
	  
	Point A, B, vetorAB;  //Atribuicao do tipo ponto as variaveis A, B e vetor AB
	scanf("%d%d%d%d%d%d", &A.x , &A.y, &A.z, &B.x , &B.y, &B.z);  //Armazenamento das coordenadas dos dois pontos
	vetorAB.x = (A.x-B.x);  //calculo da componete x do vetor AB
	vetorAB.y = (A.y-B.y);  //calculo da componente y do vetor AB
	vetorAB.z = (A.z-B.z);  //calculo da componente z do vetor AB
	
	printf("%d %d %d", vetorAB.x, vetorAB.y, vetorAB.z); //impressao das coordenadas do vetor AB
	return 0;  //retorna 0 e encerra a execucao do programa
 }
