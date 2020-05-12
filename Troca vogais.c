//Troca de vogais em uma frase 
//( 'a' pelo 'u', 'e' pelo 'o', 'i' pelo 'u', 'o' pelo 'a' e o 'u' pelo 'e')

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocaVogal(char str[]);
  
int main()
  {
  	char frase[100];
  	
  	printf("Digite a frase que tera as vogais trocadas: ");
	fgets(frase, 100, stdin);
	setbuf(stdin, NULL);
	
	trocaVogal(frase);
	printf("\nFrase com vogais trocadas: %s", frase);
	
	return 0;
  }
  
void trocaVogal(char str[])
  {
  	char *pfrase;
  	int i;
  	pfrase = &str[0];
  	setbuf(stdin, NULL);
  	
  	for(i = 0; i < strlen(str); i++)
  	  {
  	  	pfrase = &str[i];
  	  	setbuf(stdin, NULL);
  	  	switch (*pfrase)
  	  	 {
  	  	  case 'a': *pfrase = 'u';
  	  	  break;
  	  	  
  	  	  case 'e': *pfrase = 'o';
  	  	  break;
  	  	  
  	  	  case 'i': *pfrase = 'u';
  	  	  break;
  	  	  
  	  	  case 'o': *pfrase = 'a';
  	  	  break;
  	  	  
  	  	  case 'u': *pfrase = 'e';
  	  	  break;
  	     }
	  }
  }
