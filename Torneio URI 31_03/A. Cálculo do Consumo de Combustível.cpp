#include <stdio.h>
int main()
   {
   	 int tempo, velmedia = 0;
   	 float volume = 0;
   	 
   	 scanf("%d%d", &tempo, &velmedia);
   	 
   	 volume = ((velmedia*tempo)/12.00);
   	 
   	 printf("%.3f\n", volume);
   }
