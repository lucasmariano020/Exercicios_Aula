#include <stdio.h> //inclusao das bibliotecas
#include <stdlib.h>

int main() //funcao principal main
 {
   int a, b, c = 0; //declaracao e atribuicao as variaveis tipo int
   scanf("%d %d %d", &a, &b, &c); //escaneamento dos digitos de entrada e atribuicao dos valores as variaveis
   if(a > c || b > c) //testa se "a" eh maior que "c" ou "b" e maior que "c" 
    {
    	if(a > b) //se "a" ou "b" for maior que "c" e "a" for maior que b, entao "a" eh o maior numero
    	  printf("%d", a); //imprime o valor de "a"
    	else //se "a" ou "b" for maior que "c" e "a" não for maior que b, entao "b" eh o maior numero
    	  printf("%d", b); //imprime o valor de "b"
	}
   else //se nem "a" e nem "b" for maior que "c" entao "c" eh o maior numero
       printf("%d", c); //imprime o valor de "c"
   
   return 0; //retorna 0 como indicacao de sucesso com o processamento dos dado
 }
