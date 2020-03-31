#include <stdio.h>
#include <math.h>

int main()
 {
	int num, soma, i, aux_x, aux_w, primDig, ultimDig = 0;
	int w = 0;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	aux_x = num;
	
	aux_w = (num/10);
	aux_w = (aux_w*10);
	primDig = (num - aux_w);
	
	while(num != 0)
	{
	  num = (num/10);
	  i++;
	}
	
	ultimDig = (aux_x/(pow(10,(i-1))));
	soma = (primDig + ultimDig);
	
	printf("A soma do primeiro com o ultimo digito eh %d\n", soma);
	
}
