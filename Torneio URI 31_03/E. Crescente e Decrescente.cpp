#include <stdio.h>
int main()
 {
 	int X, Y, i;
 	
 	while(X != Y)
 	{
 	 scanf("%d%d", &X, &Y);
 	 if(X < Y)
 	  {
 	 	printf("Crescente\n");
	  }
	 else if(X != Y)
	  {
	  	printf("Decrescente\n");
	  }
    }
   return 0;
 }
