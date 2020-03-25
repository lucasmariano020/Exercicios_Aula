#include <stdio.h>
int main()
 {
   	short int X, Y, i = 0;
 	scanf("%d%d", &X, &Y);
 	i = X;
 	if(X < Y)
	{	
 	for(i++; i < Y; i++)
 	{
 	  if((i % 5 == 2)|| (i % 5 == 3)) printf("%d\n", i);
	 }
    }
    else if(X > Y)
    {
	 for(i++; i > Y; i++)
 	 {
	   if((i % 5 == 2)|| (i % 5 == 3)) printf("%d\n", i);
	 }
    }
 }
