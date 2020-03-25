#include <stdio.h>
 
int main() {
 
    int X, Y, i, j = 0;
 	scanf("%d%d", &X, &Y);
 	i = X;
 	j = Y;
 	if(X < Y)
	{	
 	for(i++; i < Y; i++)
 	{
 	  if((i % 5 == 2)||(i % 5 == 3)) printf("%d\n", i);
	 }
    }
    else if(X > Y)
    {
	 for(j++; X > j; j++)
 	 {
	   if((j % 5 == 2)||(j % 5 == 3)) printf("%d\n", j);
	 }
    }
 
    return 0;
}
