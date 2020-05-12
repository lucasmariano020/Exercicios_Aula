#include <stdio.h>
#include <math.h>  //Inclusao das bibliotecas

typedef struct  //Definição da sctruct com as coordenadas x e y
 {
  float x;
  float y;
 }ponto;
 
ponto a,b; //Atribuicao do tipo ponto as variaveis a e b
 
float distancia( ponto a, ponto b ) //Funcao que tem os pontos a e b como parametros de entrada para calcular a distancia entre eles
 {
	float d, A, B; //Definicao das variaveis para o calculo da distancia
	
	A = pow((b.x - a.x),2); //Calculo da variacao em x ao quadrado
	B = pow((b.y - a.y),2); //Calculo da variacao em y ao quadrado
	d  = sqrt( A + B ); //Calculo final da distancia entre os pontos pela raiz quadrada da soma das variacoes, elevadas ao quadrado, anteriores
	
	return (d); //Retorna a distancia quando eh chamada
 }

int main() 
 {
	float dist; 
	ponto A,B; //Definicao das variaveis
	
	printf(" Por favor, digite os valores de x e y para o ponto A \n");
	scanf("%f %f", &A.x , &A.y ); //Armazena os valores de x e y do ponto A
	
	printf(" Por favor, digite os valores de x e y para o ponto B \n");
	scanf("%f %f", &B.x , &B.y ); //Armazena os valores de x e y do ponto b
	
	dist = distancia(A,B); //Calcula a distancia passando os pontos "A" e "B" como parametros de entrada para a funcao "distancia"
	
	printf("A distancia entre os potnos A e B eh: %.2f ",dist); //Imprime o valor da distancia com duas casas decimais

	return 0;
 }
