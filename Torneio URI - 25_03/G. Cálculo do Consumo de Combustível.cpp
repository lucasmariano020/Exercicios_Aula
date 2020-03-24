#include <stdio.h>
int main()
   {
   	 float gasto = 12;
   	 int tempo = 0;
   	 int velmedia = 0;
   	 float volume = 0;
   	 
   	 scanf("%f%d%d", &gasto, &tempo, &velmedia);
   	 
   	 volume = ((velmedia*tempo)/gasto);
   	 
   	 printf("%.3fL\n", volume);
   }
