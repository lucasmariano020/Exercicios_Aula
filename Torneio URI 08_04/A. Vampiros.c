#include <stdio.h>
#include <math.h>  //Biblioteca necessária para a função pow, a qual denomina a potência na linha 43.

int main() 
{
 double ev1,     //Declaração das variáveis
        ev2, 
        at,
        d,
        t=0,
        aux,
        q,
        prob;    

  while (t!=1)            // Enquanto tal chave (t) for diferente de 1, o programa irão¡ rodar o código abaixo.
  {
     scanf("%lf%lf%lf%lf",&ev1,&ev2,&at,&d);
     if (ev1==0 && ev2==0 && at==0 && d==0)    //o programa só ira ser sustado se todos os numeros de entrada 
	  {                                          //      forem diferentes de 0, como o enunciado pede.
       t=1;                            // se todos forem 0, a chave(t) recebe a variável 1 e o programa é encerrado
       break;
      }
     aux = ev1;
     ev1 = 0;                          // para denominar a quantidade de vezes em que o dano (d) cabe nas variaveis ev1 e ev2
     while(aux>0)                      // é realizada tal estrutura de repetição para cada variável
      {
       aux=aux-d;
       ev1++; 
   	  }
    aux = ev2;
    ev2 = 0;
    while(aux > 0)
      {
       aux=aux-d;
       ev2++; 
   	  }
    if (at==3)                                 //Em uma anállise estatítisca, se o numero de ataque for a metade do total
      prob = (ev1/(ev1+ev2))*100;              //  do número máximo do dado (6), a probabilidade será¡ dada pela equação 
    else                                       //                        prob = (ev1/(ev1+ev2))*100
      {
       q = 1-(6-at)/6;                         // Se não, para otimizar a formula geral e não escrever apenas uma grande equação
       q = (1-q)/q;                            // uma váriavel genérica (q), recebe 1-(6-at)/6 e depois a mesma recebe (1-q)/q
       prob = (1-pow(q, ev1))/(1-pow(q, ev1+ev2))*100;             //Por fim, a equação final é dada por essa equação:
      }
    printf("%.1lf\n",prob);                    // O valor da probabilidade é impresso
  }
}
