#include <stdio.h>
int main()
   {
 	int N, quad = 0;
 	int i = 1;
 	
 	scanf("%d", &N);
 	if((N > 5) && (N < 2000))
 	 {
	  for(i == 1; i <= N; i++)
	   {
	   	if((i % 2) == 0)
	   	 {
	   	 	quad = i * i;
	   	    printf("%d^2 = %d\n", i, quad);
		  }
	   }
	  }
	 return 0;
    }
