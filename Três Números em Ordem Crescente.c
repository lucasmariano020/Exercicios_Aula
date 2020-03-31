#include <stdio.h>

int main()
{
	
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	float primeiro = 0;
	float segundo = 0;
	float terceiro = 0;
	
	printf("Digite tres numeros: ");
	scanf("%f%f%f", &num1, &num2, &num3);
	
	if(num1 >= num2 && num1>= num3)
	{
		terceiro = num1;
		
		if(num2 >= num3)
		{
		 segundo = num2;
		 primeiro = num3;
		}
		else
		{
		  segundo = num3;
		  primeiro = num2;	
		}
	}
	
	else if(num2 >= num3)
	{
		terceiro = num2;
		
		if(num1 >=num3)
		{
		  segundo = num1;
		  primeiro = num3;
		}
		else
		{
		  segundo = num3;
		  primeiro = num1;
		}
    }
	else if(num3 >= num2)
	{
		terceiro = num3;
		
		if(num1 >= num2)
		{
		 segundo = num1;
		 primeiro = num2;
		}
		else
		{
		  segundo = num2;
		  primeiro = num1;
		}
	}
	
  printf("Os numeros em ordem crescente sao: %.2f, %.2f, %.2f", primeiro, segundo, terceiro);
    
}

