#include <stdio.h> //inclusao das bibliotecas
#include <stdlib.h> 

int main() //funcao principal main
 {
 	char expressao; //declaracao de variavel tipo char
 	float num1, num2, resultado = 0; //declaracoes e atribuicoes as variaveis tipo float
 	scanf("%f%c%f", &num1, &operacao, &num2); //escaneamento dos digitos de entrada e atribuicao dos valores as variaveis
 	switch (operacao) //definicao da variavel a ser testada com o switch
 	 {
 	 	case '+': resultado = (num1 + num2); //se a operacao for "+" então o resultado eh a soma de num1 e num2
 	 	break; //finaliza as comparacoes do switch
 	 	
 	 	case '-': resultado = (num1 - num2); //se a operacao for "-" então o resultado eh a subtração de num1 por num2
 	 	break;
 	 	
 	 	case '*': resultado = (num1 * num2); //se a operacao for "*" então o resultado eh a mutilplicação de num1 e num2
 	 	break;
 	 	
 	 	case '/': resultado = (num1 / num2); //se a operacao for "/" então o resultado eh a divisao de num1 por num2
 	 	break;
 	 	
 	 	default: printf("Operacao Invalida"); //caso o simbolo inserido nao seja igual a uma das quatro operacoes citadas, a operacao eh invalida
 	 	return (-1); //retorna -1 como indicação de erro
	  }
	  
 	printf("%0.2f", resultado);  //imprime na tela o resultado da operacao entre num1 e num2 com duas casas decimais
	return 0; //retorna 0 como indicacao de sucesso com o processamento dos dados	 	
 }
