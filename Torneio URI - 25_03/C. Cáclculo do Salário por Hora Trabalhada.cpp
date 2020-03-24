#include <stdio.h>
int main()
  {
 	int numfun = 0;
  	int horatrab = 0;
  	float valhora = 0;
  	float salario = 0;
  	
  	scanf("%d%d%f", &numfun, &horatrab, &valhora);
  	salario = (horatrab*valhora);
  	
  	printf("NUMBER = %d\n", numfun);
  	printf("SALARY = U$ %.2f\n", salario);
  }
