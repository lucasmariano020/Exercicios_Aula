#include <stdio.h>
int main()
 {
	int num = 0;
	int i = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	while(num != 0)
	{
	  num = (num/10);
	  i++;
	}
	
	printf("O numero tem %d digitos.", i);
	
        return 0;
 }
