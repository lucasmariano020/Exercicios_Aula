#include <stdio.h>

int main(){
 
 //Declaracao das variáveis  
int n=1,p,i,qtd[20],temp[20],j,aux,aux2,somat[n],somaqtd[n],maiort=0; 

scanf("%d",&n); //leitura do número de pedidos
    while (n!=0){   //enquanto o valor n, que é o lido para o numero de pedidos, for diferente de 0 o programa ira rodar

     scanf("%d",&p); //leitura do numero max de pizzas
 
        for (i=0;i<n;i++) {   //repetição de 1 até o numero de pedidos
        scanf("%d %d",&temp[i],&qtd[i]); } //leitura do tempo total para ser entregue e da quantidade de pizzas do pedido, respectivamente

        for(i=0; i<n; i++){
            for(j= i; j<n; j++){
                if(temp[i] > temp[j]){         
                aux = temp[i];                  //  Estrutura de bubble sort para ordenar em ordem crescente 
                temp[i] = temp[j];              //os valores dos vetores de quantidade e tempo.
                temp[j] = aux;
                aux2=  qtd[i];
                qtd[i] = qtd[j];
                qtd[j]=  aux2;
                }
            }
        }   
        for (j=1;j<=n;j++){
        somaqtd[j]=0;
        somat[j]=0;
            for (i=n-j;i>=0;i--){
            somaqtd[j]=somaqtd[j]+qtd[i];                            // soma da qnt das pizzas
                if (somaqtd[j]<p)  { somat[j]=somat[j]+temp[i];  }  // se a soma for menor ou igual que o numeros de pedidos maximo
                                                                // soma do tempo daquele vetor a qual foi somado na qtd de pizzas pelo indice [j].
               
                else { somaqtd[j]= somaqtd[j] - qtd[i];}     // se nÃ£o, ocorre a subtração do valor pelo adicionado acima (sendo assim, é armazenado um valor menor
            }                                                //que o maximo numero de pedidos, p)
            
            if (j==1) { maiort=somat[j];}                     //estrutura para identificar o maior valor do vetor
            else{
                if (somat[j]>maiort){  maiort=somat[j]; }     //se o maior for o do indice j, o maior tempo recebe esse essa soma.
            }
        }

printf("%d min.\n",maiort);  // ao final esse maior valor é impresso
scanf("%d",&n);
    }
}
