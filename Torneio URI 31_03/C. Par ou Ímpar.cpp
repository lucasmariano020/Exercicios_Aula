#include<stdio.h>
int main()
  {
  	int N = 0;
  	int i = 0;
  	scanf("%d", &N);
  	int X[N];
  	
  	for(i == 0; i < N;  i++)
	  {
	  	scanf("%d", &X[i]);
	  }
	i = 0;
  	for(i == 0; i < N; i++)
  	  {
  	  	int C = X[i];;
  	  	if(C != 0)
  	  	   {
  	  	   	if(C > 0)
			 {
				   
  	  	        if((C % 2) == 0)
			    { 
  	  	   	        printf("EVEN POSITIVE\n");
  	  	        }
  	  	         else
  	  	        {
  	  	        	printf("ODD POSITIVE\n");
			    }
		     }
		    else
		     {
		     	if((C % 2) == 0)
		     	 {
		     	 	printf("EVEN NEGATIVE\n");
				 }
				else
				 {
				 	printf("ODD NEGATIVE\n");
				 }
			 }    
			 
		    }
	    
	    
		else
	   	   {
		    printf("NULL\n");
		   }
  	  	
   	  }
  }
