#include <stdio.h>
int main()
 {
	long long int  d, p, q, r, s, x, y,k, I, J, a, b, soma,C; //Declaração das variaveis
	scanf("%lld",&d); //leitura das dimensões das matrizes a,b e c
	scanf("%lld %lld %lld %lld %lld %lld",&p,&q,&r,&s,&x,&y);    //leitura das variáveis da fórmula para encontrar os valores da matriz A e B
	scanf("%lld %lld",&I,&J); //leitura da linha e coluna do valor objetificado
	soma=0;
	for (k=1;k<=d;k++)         //essa estrutura de repetição é feita para fazer a multiplicação em decorrência da dimensão da matriz 
	 {                         //Como o produto de matrizes é obtido por:  A[linha][k]*B[k][coluna] em toda variação de k
	  a = (p*I+q*k)%x;         //o espaÃ§o da matriz A será calculado na coluna k e na linha I 
	  b = (r*k + s*J)%y;       //e o espaço da matriz B será calculado na coluna J e na linha k 
	  soma = soma + a*b;       //então, a soma do produto dessas duas variáveis na linha I e coluna J em todos os k resulta na matriz C, 
	 }                                                                       //nesta linha e coluna especificada na leitura no começo do código.
	C = soma;
	printf("%lld\n",C);        //Impressão do resultado final
	return 0;
 }
