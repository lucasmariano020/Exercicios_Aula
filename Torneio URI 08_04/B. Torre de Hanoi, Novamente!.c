#include <stdio.h>
#include <math.h>

int main()
{
   //Declara��o das vari�veis 
 int      key=0,  n,   varetas,   d,  i,  j,  aux,  vpos[51];
 double   add=1,  cond,  T[51][51],  z;

   //Entrada do n�meros de vezes a ser repetio a an�lise o n�mero de varetas
 scanf("%d",&n); 
  
   //Estrutura de repeti��o at� o n�mero de repeti��es
 for (d=1;d<=n;d++)
  {
   key=0;
   scanf("%d",&varetas);    //Entrada o n�mero de varetas
   
   //   Usamos um raciciono o qual v� a torre de hanoi como uma matriz a qual seu numero
   //de colunas � o seu numero de varetas e, desse modo, para que seja colocado o valor
   //dentro de uma certa localiza��o na matriz  necess�rio  cumprir duas condi��eses, as quais est�o comentadas no c�digo.
   //  Para qualquer dessas condi��es, o espa�o na matriz T[i][j] recebe o valor do add (que � o incremento dql an�lise)
   //e h� tamb�m um incremento para o vetor posi��o para a coluna j dql an�lise, o qual justifica em qual linha
   //estar� sendo realizada a an�lise em cada coluna que for passada.
   //  H� tamb�m um incremento de add que � o valor da bola a ser colocado na pr�ima an�lise e o valor da key recebe 0
   //  Essa key recebe um incremento para cada vez que o j aumenta sem satisfazer nenhuma das condi��es listadas.
   //  Se a key for equivalente ao numero de varetas, o c�digo para de rodar e signifca que em nenhuma das colunas foi poss�vel
   //atender nenhuma das condi��es.

   for (j=1;j<=varetas;j++) { T[0][j]=0, T[1][j]=0, vpos[j]=1; }  
     while (key<varetas)
     {    
        for (j=1;j<=varetas;j++){
            i=vpos[j];
            z=sqrt(add+T[i-1][j]);
            aux=z;
            cond=z-aux;

   //  Se a condi��o (1): a qual o valor deve ser equivalente a 0 e a raiz  da soma dos elementos deve ser diferente de 1
   //           (a qual define o elemento como um quadrado perfeito)
             if (cond==0 && z!=1){
             T[i][j]=add;
             vpos[j]++;
             key=0;
             add=add+1;
              break;
            }
   //   a condi��o (2): a localiza��o deve conter 0 e a localiza��o de uma linha abaixo tamb�m 
   //           (a qual define os elementos da primeira linha n�o ocupados)
            if(T[i][j]==0 && T[i-1][j]==0){
             T[i][j]=add;
             vpos[j]++;
             key=0;
             add=add+1;
              break; 
            }
         key++;   
            }      
     }
     //  Como n�o entendemos o racicionio que ele denomina na teoria do exerc�cio, apenas imprimimos. Visto que,
     //o valor do numero de varetas pode ser no maximo 50 e, como, até esse valor h� um n�mero finito de bolas a serem
     //colocadas na torre, n�o conseguimos analisar isto. ;
      printf("%.0f\n",add-1);  //  � impresso o n�mero da ultima bola a ser incrementada menos 1 visto que,
                                     //ela n�o preencheu nenhum espa�oo.
     add=0;
     } 
   
}              
