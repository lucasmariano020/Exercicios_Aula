#include <stdio.h>
int main()
  {
  	int N, i, j = 0;
  	scanf("%d", &N);
	float X[N], Y[N];
	float divisao = 0;
  	
  	for(i == 0; i < N; i++)
	  {
	  	scanf("%d%d", &X[i], &Y[i]);
	  	divisao = (X[i]/Y[i]);
	  	if(Y[i] != 0)
		{
	  	  printf("%0.1f\n", divisao);
	    }
	  	else
	  	{
	  	  printf("divisao impossivel");
	    }
	  }
  }
	

