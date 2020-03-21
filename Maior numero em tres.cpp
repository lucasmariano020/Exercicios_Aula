#include <stdio.h>
int main()
{
  float a;
  float b;
  float c;
  float num = 0;
  
  printf("Digite um numero: ");
  scanf("%f", &a);
  num = a;
	
  printf("Digite outro numero: ");
  scanf("%f", &b);
  
   if(b>num)
    {
     num = b;
    }
   
   printf("Digite outro numero: ");
   scanf("%f",&c);
   
    if(c>num)
     {
      num = c;
     }
	
  printf("O maior numero entre os digitados eh: %f",num);
 		
}

