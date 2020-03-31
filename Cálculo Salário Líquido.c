#include <stdio.h>

int main()
{
 int diaria = 20;
 int dias = 0;
 int valbruto = 0;
 float valliquido = 0;

 printf("Digite o numero de dias trabalhados: ");
 scanf("%d", &dias);
 if(dias<0)
   {
    printf("Digite um valor positivo valido");
   }
 else
  {
   valbruto = dias*diaria;
   valliquido = ((valbruto*0.92));
   printf("O valor liquido do salario eh R$%.2f", valliquido);
  }
}
