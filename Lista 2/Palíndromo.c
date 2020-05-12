//inclusao das bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
 {
 	char palindromo[20];  //definicao da variavel que recebera a palavara digitada
 	char strNorm[20];  //definicao da string que contera a palavra digitada normalmente
    char strInv[20];  //definicao da string que contera a palavra invertida
 	int i;   //ponteiro da string normal
	int j;  //ponterio da string invertida
	int strTam;  //variavel que contem o tamanho da string
 	scanf("%s", &palindromo);   //armazenamento da palavra digitada na string
 	strTam = strlen(palindromo);  //definicao da variavel com o tamanho da palavra digitada
 	
 	for(i = 0; i <= strTam; i++) //laco de repeticao para atribuição da string normal a palavra digitada
 	   strNorm[i] = palindromo[i];
	   
	j = 0; //ponteiro da string invertida inicia em 0
 	for(i = (strTam-1); i >= 0; i--)  //laco de repeticao para a analise de cada um dos espacos da string normal comecando da sua ultima posicao
 	  {
 	   strInv[j] = strNorm[i];  //definicao da string invertida como o inverso da string normal 
 	   j++;  //soma uma unidade ao ponteiro da string invertida
      }
 	   
    for(i=0; i <= strTam; i++)  //laco de repeticao para checagem de cada posicao das duas strings
      {
       if(strInv[i] != strNorm[i])  //se alguma das posicoes das strings forem diferentes, a palavra digitada nao eh um palindromo
        {
         printf("NAO");  //imprime "NAO" na tela informando que a palavra nao eh um palindromo
         return 0;  //retorna 0 e encerra a execucao do programa
        }
	  }
	
	printf("SIM");  //imprime "SIM" na tela informando que a palavra eh um palindromo
    return 0;  //retorna 0 e encerra a execucao do programa
 }
