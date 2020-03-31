#include <stdio.h>
int main()
 {
 	float A[100], x;
 	int i = 0;
 	for(i == 0; i < 100; i++)
 	 {
 	 	scanf("%f", &A[i]);
 	 	x = A[i];
 	 	if(x <= 10)
 	 	 printf("A[%d] = %0.1f\n", i, x);
	 }
	return 0;
 }
