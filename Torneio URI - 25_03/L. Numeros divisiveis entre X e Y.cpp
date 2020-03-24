#include <stdio.h>
int main()
 {
   	int X, Y, resto, i = 0;
 	scanf("%d%d", &X, &Y);
 	i = X;
 	
 	if(X < Y)
	{
		
 	for(i++; i < Y; i++)
 	{
 		resto = (i % 5);
	   
 	  if((resto == 2)|| (resto == 3))
 	  {
 	  	printf("%d\n", i);
	   }
	 }
    }
    
    else if(X > Y)
    {
 	
	 for(i++; i > Y; i++)
 	 {
	  resto = (i % 5);
 	  
	   if((resto == 2)|| (resto == 3))
 	   {
 	  	printf("%d\n", i);
	   }
	 }
    }
 }
