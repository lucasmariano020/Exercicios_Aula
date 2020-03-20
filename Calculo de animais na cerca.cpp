#include <stdio.h>

int main(){

int patas = 0;
int cabecas = 0;
int patos = 0;
int coelhos = 0;

printf("Digite o numero total de patas no cercado: ");
scanf("%d",&patas);

printf("\nDigite o numero de cabecas no cercado: ");
scanf("%d",&cabecas);

coelhos = ((2*cabecas)-patas)/(-2);
patos = cabecas - coelhos;

if(patos>=0&&coelhos>=0){
printf("\nO numero de patos dentro do cercado eh %d e o de coelhos eh %d", patos,coelhos);
}

else{
printf("\nSituacao Impossivel");
}
}
