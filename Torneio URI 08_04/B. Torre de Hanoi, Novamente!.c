#include <stdio.h>
#include <math.h>

int main()
{
   //Declaração das variáveis 
 int      key=0,  n,   varetas,   d,  i,  j,  aux,  vpos[51];
 double   add=1,  cond,  T[51][51],  z;

   //Entrada do números de vezes a ser repetio a análise o número de varetas
 scanf("%d",&n); 
  
   //Estrutura de repetição até o número de repetições
 for (d=1;d<=n;d++)
  {
   key=0;
   scanf("%d",&varetas);    //Entrada o número de varetas
   
   //   Usamos um raciciono o qual vê a torre de hanoi como uma matriz a qual seu numero
   //de colunas é o seu numero de varetas e, desse modo, para que seja colocado o valor
   //dentro de uma certa localização na matriz  necessário  cumprir duas condiçõeses, as quais estão comentadas no código.
   //  Para qualquer dessas condições, o espaço na matriz T[i][j] recebe o valor do add (que é o incremento dql análise)
   //e há¡ também um incremento para o vetor posição para a coluna j dql análise, o qual justifica em qual linha
   //estará sendo realizada a análise em cada coluna que for passada.
   //  Há¡ também um incremento de add que é o valor da bola a ser colocado na próima análise e o valor da key recebe 0
   //  Essa key recebe um incremento para cada vez que o j aumenta sem satisfazer nenhuma das condições listadas.
   //  Se a key for equivalente ao numero de varetas, o código para de rodar e signifca que em nenhuma das colunas foi possível
   //atender nenhuma das condições.

   for (j=1;j<=varetas;j++) { T[0][j]=0, T[1][j]=0, vpos[j]=1; }  
     while (key<varetas)
     {    
        for (j=1;j<=varetas;j++){
            i=vpos[j];
            z=sqrt(add+T[i-1][j]);
            aux=z;
            cond=z-aux;

   //  Se a condição (1): a qual o valor deve ser equivalente a 0 e a raiz  da soma dos elementos deve ser diferente de 1
   //           (a qual define o elemento como um quadrado perfeito)
             if (cond==0 && z!=1){
             T[i][j]=add;
             vpos[j]++;
             key=0;
             add=add+1;
              break;
            }
   //   a condição (2): a localização deve conter 0 e a localização de uma linha abaixo também 
   //           (a qual define os elementos da primeira linha não ocupados)
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
     //  Como não entendemos o racicionio que ele denomina na teoria do exercício, apenas imprimimos. Visto que,
     //o valor do numero de varetas pode ser no maximo 50 e, como, atÃ© esse valor há¡ um número finito de bolas a serem
     //colocadas na torre, não conseguimos analisar isto. ;
      printf("%.0f\n",add-1);  //  É impresso o número da ultima bola a ser incrementada menos 1 visto que,
                                     //ela não preencheu nenhum espaçoo.
     add=0;
     } 
   
}              
