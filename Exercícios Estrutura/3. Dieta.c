#include <stdio.h>
#include <string.h> //Inclusao das bibliotecas

int main()
 {
	
	typedef struct  //Definição da sctruct com os atributos dos pacientes
	 {
	  char nome[50]; 
	  float calorias;
	  float carb;
	 }dados;
	
	
	int n,i,j,k; //Definicao das variaveis do tipo inteiro
	
	printf("Digite o numero de pacotes de alimento: \n");
	scanf("%d",&n);  //Armazena o numero de pacotes a serem classificados
	setbuf(stdin, NULL);
	
	//Declaracao das structs com o tipo "dados"
	dados nut;
	dados nutricao[n];
	dados aux;
	
	
	//Leitura das variaveis com limpeza do buffer pra nao ocorrer uma leitura indesejada no fgets e afins
	for (i=0; i<n; i++)
	{ 
	  printf("Digite o nome do pacote de alimento :  \n");
	  fgets(nut.nome,50,stdin); //Armazena o nome do pacote no campo "nome" da struct "nut"
	  setbuf(stdin, NULL);
	
	  printf("Digite a quantidade de calorias desse alimento:  \n");
	  scanf("%f",&nut.calorias); //Armazena as calorias contidas no produto no campo "calorias" da struct "nut"
	  setbuf(stdin, NULL);
	
	  printf("Digite quantidade de gramas de carboidrato desse alimento: \n");
	  scanf("%f",&nut.carb);  //Armazena os carboidratos contidos no produto no campo "carboidratos" da struct "nut"
	  setbuf(stdin, NULL);
	 
	  nutricao[i]=nut;  //Armazena a struct nut atual na posicao "i" do vetor que tambem tem formato "dados"
	}
	
	//uso do bubble sort pra ordenacao do vetor - - - crescente
	 int key;
	  do 
	   {
	    key = 0;
	    for (j=0; j< (n-1) ; j++)
		   {//comparacao as calorias dos produtos (o que tem menso calorias eh armazenado primeiro no vetor "nutricao")
			if (nutricao[j].calorias > nutricao[j+1].calorias) 
		      {
		            aux        = nutricao[j];
		            nutricao[j]   = nutricao[j + 1];
		            nutricao[j + 1] = aux;
			        key =1;
			  }
			  
			  //criterio de desempate entre produtos de calorias iguais (o que tem menos carboidrato é armazenado em primeiro no vetor "nutricao")
			  
		    else if (nutricao[j].calorias == nutricao[j+1].calorias)   
		      {    
		            if (nutricao[j].carb > nutricao[j+1].carb)
		            {
		             aux        = nutricao[j];
		             nutricao[j]   = nutricao[j + 1];
		             nutricao[j + 1] = aux;    
		            }
		      }
		    } 
	} while (key==1);
	
	printf("\n"); //Linha branca para separar os dados na impressao
	for (i=0;i<n;i++) //Imprime os produtos de menor caloria primeiro
	    printf("%d - %s",(i+1),nutricao[i].nome);    
	
	return 0;      
 }
