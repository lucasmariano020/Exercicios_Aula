#include <stdio.h>
int main()
  {
   int X = 0;
   float Y = 0;
   float consmed = 0;
   
   scanf("%d%f", &X, &Y);
   consmed = (X/Y);
   
   printf("%0.3f km/l\n", consmed);
  }

