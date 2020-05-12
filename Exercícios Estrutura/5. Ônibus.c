#include <stdio.h>
#include <string.h> //Inclusao das bibliotecas

typedef struct //Definição da sctruct com os dados dos passageiros
  {
	int pos;
	char nome[50];
	char   cpf[50];
	int idade;
  }onibus;

int main()
 {

	int n, m, p, k, j, i, deve = 0; //Definicao das variaveis
	
	printf("Por favor, digite o numero total de cadeiras e a quantidade de pessoas a compra-las, respectivamente: \n"); 
	scanf("%d%d",&n,&m); //Armazenamento dos valores nas variaveis n (numero de cadeiras no onibus) e m (numero de compradores)
	setbuf(stdin, NULL); //Limpeza da entrada do teclado, que foi repetida para que todos os scanf ocorresem corretamente
	
	int vanalise[m]; //Vetor com os numeros de cadeiras utilizado para verificacao de disponibilidade
	onibus lugar[n],vazio[n]; //Definicao do vetor com os dados dos passageiros e dos espacos vazios
	int check[n]; //Vetor utilizado para chegagem das cadeiras vazias e, portanto para a correta impressao das ocupacoes dos assentos
	
	for(i=0;i<n;i++){ check[i]=0; } //Setagem de todas as posicoes do vetor de checagem inicialmente iguais a 0
	
	for (i=0;i<m;i++) //Condicao para execucao do recebimento dos dados dos passageiros
	 { 

		  scanf("%d",&k);  //Leitura do numero da cadeira
		  setbuf(stdin, NULL); 
		
		  if (k>=0 && k <=(n-1))  //Condicao para atribuicao de um comprador a uma cadeira, sendo que como k (num. cadeira) inicia em 0, os lugares ocupaveis vao ate o assento "(k = n-1)"
		   {
		     vanalise[i] = k;  //Armazenamento do numero da cadeira na posicao "i" do vetor
		     deve = 0; //Estado de variavel que condiciona apenas a execução de uma das duas possibilidades de teste
			           //(quando for digitado uma cadeira ja comprada ou quando a digitacao esta de acordo com as vagas)
			           
			 for (j=0;j<i;j++) //Laço de repeticao para analise e comparacao entre o valor digitado para um assento e os que estao disponiveis
			  {
			   if (j!=i && vanalise[j] == k)  //Se o numero digitado para uma cadeira ja tiver sido ocupado
			    {                                 
			     printf("Cadeira %d ja comprada \n",k); 
			     
			     //Repeticao da requisicao dos dados
			     scanf("%s%s%d", &vazio[i].nome, &vazio[i].cpf, &vazio[i].idade); 
			     setbuf(stdin, NULL);
			     lugar[k].pos=k;  //alocacao de uma cadeira com o seu numero no vetor que corresponde aos lugares do onibus              
				 check[k]=1;  //vetor que grava que o local esta ocupado

	             deve=1; //alteracao no valor de "deve" para que a outra possibilidade nao ocorra
		         break;
			    }
			  }
			 if (deve == 0) //analise do valor de "deve" para executar ou nao a segunda possibilidade  (quando o numero digitado para a cadeira esta de acordo com as vagas)
			  {
			  	//Requerimento dos dados do ocupante
				scanf("%s%s%d", &lugar[k].nome, &lugar[k].cpf, &lugar[k].idade); 
				setbuf(stdin, NULL);
					   
				lugar[k].pos=k;   //alocacao de uma cadeira com o seu numero no vetor que corresponde aos lugares do onibus             
				check[k]=1; //vetor que grava que o local esta ocupado
	          }                           
	       }
	
	 }
	
	printf("\n"); //Linha branca para separar os dados na impressao
	for (i=0;i<n;i++) //Laco de repeticao para imprimir o estado final dos assentos no onibus
	 { 
	  if (check[i]== 0 ) //Se o lugar estiver vazio, imprime "NULL"
	    printf("%d - NULL \n",i);
	   
	  else if (check[i]==1)   //Se a cadeira foi comprada, imprime os dados do comprador e o numero do assento 
	    printf("%d - %s %s %d \n",i,lugar[i].nome,lugar[i].cpf,lugar[i].idade);
	 }
	 
	return 0;
 }
