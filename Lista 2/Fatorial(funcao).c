//inclusao das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fatorial(int N); //declaracao da funcao que calcula o fatorial

int main()
  {
  	int N;  //variavel que armazena o numero que tera seu fatorial calculado
  	scanf("%d", &N);  //recebimento do numero para o calculo do seu fatorial
  	printf("%d", fatorial(N));  //imprime o valor retornado pela funcao que calculo o fatorial do numero digitado
  	return 0;  //retorna 0 e encerra a execucao do programa
  }

int fatorial(int N)  //funcao que calcula o fatorial de um numero inteiro recebendo ele como parametro de entrada
  {
  	int i;  //declarcao do numero variavel no calculo do fatorial
  	int resultado = N;  //variavel resultado inicia com o valor digitado
  	for(i = 1; i < N; i++) //laco de repeticao para o calculo do fatorial do numero digitado que eh executado "N-1" vezes
  	  {
  	  	resultado = (resultado*(N-i));  //redefinicao do valor da variavel resultado a cada multiplicacao por (n-i) em que i eh somado ate chegar ao valor de (N-1)
	  }
	  
	return (resultado);	  //retorno do valor para o fatorial calculado do numero digitado
  }  

