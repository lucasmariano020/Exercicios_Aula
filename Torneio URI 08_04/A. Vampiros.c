#include <stdio.h>
#include <math.h>  //Biblioteca necess�ria para a fun��o pow, a qual denomina a pot�ncia na linha 43.

int main() 
{
 double ev1,     //Declara��o das vari�veis
        ev2, 
        at,
        d,
        t=0,
        aux,
        q,
        prob;    

  while (t!=1)            // Enquanto tal chave (t) for diferente de 1, o programa ir�o� rodar o c�digo abaixo.
  {
     scanf("%lf%lf%lf%lf",&ev1,&ev2,&at,&d);
     if (ev1==0 && ev2==0 && at==0 && d==0)    //o programa s� ira ser sustado se todos os numeros de entrada 
	  {                                          //      forem diferentes de 0, como o enunciado pede.
       t=1;                            // se todos forem 0, a chave(t) recebe a vari�vel 1 e o programa � encerrado
       break;
      }
     aux = ev1;
     ev1 = 0;                          // para denominar a quantidade de vezes em que o dano (d) cabe nas variaveis ev1 e ev2
     while(aux>0)                      // � realizada tal estrutura de repeti��o para cada vari�vel
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
    if (at==3)                                 //Em uma an�llise estat�tisca, se o numero de ataque for a metade do total
      prob = (ev1/(ev1+ev2))*100;              //  do n�mero m�ximo do dado (6), a probabilidade ser� dada pela equa��o 
    else                                       //                        prob = (ev1/(ev1+ev2))*100
      {
       q = 1-(6-at)/6;                         // Se n�o, para otimizar a formula geral e n�o escrever apenas uma grande equa��o
       q = (1-q)/q;                            // uma v�riavel gen�rica (q), recebe 1-(6-at)/6 e depois a mesma recebe (1-q)/q
       prob = (1-pow(q, ev1))/(1-pow(q, ev1+ev2))*100;             //Por fim, a equa��o final � dada por essa equa��o:
      }
    printf("%.1lf\n",prob);                    // O valor da probabilidade � impresso
  }
}
