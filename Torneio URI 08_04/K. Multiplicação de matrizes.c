#include <stdio.h>
int main()
 {
	long long int  d, p, q, r, s, x, y,k, I, J, a, b, soma,C; //Declara��o das variaveis
	scanf("%lld",&d); //leitura das dimens�es das matrizes a,b e c
	scanf("%lld %lld %lld %lld %lld %lld",&p,&q,&r,&s,&x,&y);    //leitura das vari�veis da f�rmula para encontrar os valores da matriz A e B
	scanf("%lld %lld",&I,&J); //leitura da linha e coluna do valor objetificado
	soma=0;
	for (k=1;k<=d;k++)         //essa estrutura de repeti��o � feita para fazer a multiplica��o em decorr�ncia da dimens�o da matriz 
	 {                         //Como o produto de matrizes � obtido por:  A[linha][k]*B[k][coluna] em toda varia��o de k
	  a = (p*I+q*k)%x;         //o espaço da matriz A ser� calculado na coluna k e na linha I 
	  b = (r*k + s*J)%y;       //e o espa�o da matriz B ser� calculado na coluna J e na linha k 
	  soma = soma + a*b;       //ent�o, a soma do produto dessas duas vari�veis na linha I e coluna J em todos os k resulta na matriz C, 
	 }                                                                       //nesta linha e coluna especificada na leitura no come�o do c�digo.
	C = soma;
	printf("%lld\n",C);        //Impress�o do resultado final
	return 0;
 }
