#include <stdio.h> //inclusao das bibliotecas
#include <stdlib.h>

int main()
 {
 	int i, num, den = 0; //declaracao e atribuicao as variaveis tipo int
 	scanf("%d%d", &num, &den); //escaneamento dos digitos de entrada e atribuicao dos valores as variaveis
 	for(i == 0; num >= den; i++) //loop executado se a variavel "num" for menor que o denominador da fracao, incrementando a variavel de contagem "i" em uma unidade a cada repeticao 
	 num = num - den; //subtracao do valor do numerador pelo denominador da fracao e redefinicao do numerador com esse valor
	 
 	printf("Quociente: %d\n", i); //imprime o valor do quociente da divisao
 	printf("Resto: %d", num); //imprime o valor do resto da divisao
 	
 	return 0; //retorna 0 como indicacao de sucesso com o processamento dos dado
 }
