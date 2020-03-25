#include <stdio.h>
int main()
  {
      int N = 0;
      int i = 1;
      int PROD = 0;
    
      scanf("%d", &N);
      
      while(i <= 10)
       {
       	 PROD = i*N;
     	 printf("%d x %d = %d\n", i, N, PROD);
     	 i++;
       }
  }
