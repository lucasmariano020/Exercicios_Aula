#include  <stdio.h> 
#include <string.h> //Inclusao das bibliotecas


int main( )
 {
 
	typedef struct  //Definição da sctruct com os atributos dos pacientes
	 {
	   char  nome[50];
	   float   altura;
	   float     peso;
	   char genero[5]; 
	   int         id; 
	 }agenda;
	
	//Definicao das variaveis
	int n, i;
	int x = 0;
	int y = 0;
	
	printf("Por favor, digite o numero de pessoas da sua agenda: \n");
	scanf("%d",&n);  //Armazena o numero de pessoas a serem registradas
	setbuf(stdin, NULL);
	
	//definicao das structs com o tipo agenda
	agenda    contato;
	agenda  pessoa[n];
	
	for (i=1;i<=n;i++) //Laço de repticao para o armazenamento dos dados referentes a cada paciente
	 {
	  printf("   Agora, por favor, digite o nome da pessoa numero %d: \n", i );
	  fgets(contato.nome, 50, stdin); //Armazena o nome do paciiente no campo "nome" da struct contato
	  setbuf(stdin, NULL);  //Limpeza da entrada do teclado, que foi repetida para que todos os scanf ocorresem corretamente
	
	  printf("   Agora, por favor, digite a altura, em metros, da pessoa numero %d:   \n", i );
	  scanf("%f" , &(contato.altura) ); //Armazena a altura do paciiente no campo "altura" da struct contato
	  setbuf(stdin, NULL);
	  
	  printf("   Agora, por favor, digite o peso, em kilogramas, da pessoa numero %d:   \n", i );
	  scanf("%f" , &(contato.peso) );  //Armazena o peso do paciiente no campo "peso" da struct contato
	  setbuf(stdin, NULL);
	
	  printf("   Agora, por favor, digite o genero, sendo M (masculino) ou F(feminino), da pessoa numero %d:   \n", i );
	  fgets(contato.genero, 5, stdin); //Armazena o genero do paciente no campo "genero" da struct contato
	  setbuf(stdin, NULL);
	
	  printf("   Por fim, digite o numero ID da pessoa numero %d:   \n", i );
	  scanf("%d",  &(contato.id)  );  //Armazena o numero ID do paciente no campo "id" da struct contato
	  setbuf(stdin, NULL);
	
	  pessoa[i]=contato; //Armazena a struct contato atual na posicao "i" do vetor que tambem tem formato "agenda"
	
	 } 
	
	int entradaid; //Define a entrada do id como um numero inteiro
	
	while (entradaid != -1) //Condicao para chegaem dos IDs, em que, caso seja recebido na entrada o valor -1, o recebimento dos IDs se cessa 
	 {
	  scanf("%d", &entradaid);
	  printf("\n"); //Linha branca para separar os dados na impressao
	  setbuf(stdin, NULL);
	  for ( i=1 ; i<=n ; i++)
	   { 
	    if ( pessoa[i].id == entradaid ) //Imprime os dados da pessoa cadastrada com o id de entrada, caso exista
	     {
	        printf(" Nome   = %s",   pessoa[i].nome  ); 
	        printf(" Altura = %.2f  \n",  pessoa[i].altura ); 
	        printf(" Peso   = %.2f  \n",   pessoa[i].peso  ); 
	        printf(" Genero = %s",  pessoa[i].genero ); 
	        printf(" ID     = %d  \n",    pessoa[i].id   ); 
	     }
	   }  
	 }
	 
  return 0;
 }
