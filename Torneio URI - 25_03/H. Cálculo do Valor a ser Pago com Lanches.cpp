#include <stdio.h>
int main()
   {
   	int code = 0;
	float quant, conta = 0;
   	
   	scanf("%d%f", &code, &quant);
   	
   	switch (code)
   	 {
   	     case 1:
	     conta = (quant*4.00);
	     break;
	     
	     case 2:
	     conta = (quant*4.50);
	     break;
	     
	     case 3:
	     conta = (quant*5.00);
	     break;
	     
	     case 4:
	     conta = (quant*2.00);
	     break;
	     
	     case 5:
	     conta = (quant*1.50);
	     break;
	 }
   	 
   	printf("Total: R$ %0.2f\n", conta);
	   
	   	
    }
