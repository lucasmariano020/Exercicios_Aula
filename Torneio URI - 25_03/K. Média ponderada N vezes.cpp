#include <stdio.h>
int main()
{
   int N = 0;
   
   scanf("%d", &N);
   int C = 3*N;
   int i = C;
   
   float notas[C];
   float mediaP[N];
   
   
   while(C >= 1)
    {
   	 scanf("%f", &notas[C]);	
		C--;
    }
    
    while(N >= 1)
    {
    	mediaP[N] = (((notas[i]*2)+(notas[i-1]*3)+(notas[i-2]*5))/10);
    	i = i-3;
    	printf("%0.1f\n", mediaP[N]);
    	N--;
    }
 }
