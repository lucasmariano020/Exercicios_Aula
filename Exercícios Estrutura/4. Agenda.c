#include <stdio.h>
#include <string.h> //Inclusao das bibliotecas

int main()
  {
    typedef struct  //Definição da sctruct com os períodos de tempo
 	 {
 	 	int dia;
 	 	int mes;
 	 	int ano;
 	 	int hora;
 	 	int minuto;
 	 	int segundo;
 	 	char atividade[40];
	 }agenda;
	
	//Definicao das variaveis
    int tarefas, i, j, resultado = 0; 
	agenda tempo;
	
	printf("Digite o numero de atividades a serem realizadas: \n");
	scanf("%d", &tarefas); //Armazena a quantidade de atividades a serem realizadas na variavel "tarefas"
	agenda vetorTarefa[tarefas]; //Define o vetor com o tamanho da variavel "tarefas" e atribui o tipo agenda a ele
	setbuf(stdin, NULL);  //Limpeza da entrada do teclado, que foi repetida para que todos os scanf ocorresem corretamente
	
	for(i = 1; i <= tarefas; i++) //Laço de repeticao para a chegaem do tempo em que as tarefas ocorrerao
	 {
	 	printf("Digite o dia da atividade %d\n", i); 
	 	scanf("%d", &vetorTarefa[i].dia); //Armazena o valor do dia na posicao "i" do "vetorTarefa" no campo "dia"
	 	setbuf(stdin, NULL);
	 	
	 	printf("Digite o mes da atividade %d\n", i);
	 	scanf("%d", &vetorTarefa[i].mes);  //Armazena o valor do dia na posicao "i" do "vetorTarefa" no campo "mes"
	 	setbuf(stdin, NULL);
	 	
	 	printf("Digite o ano da atividade %d\n", i);
	 	scanf("%d", &vetorTarefa[i].ano);  //Armazena o valor do dia na posicao "i" do "vetorTarefa" no campo "ano"
	 	setbuf(stdin, NULL);

	 	printf("Digite somente a que hora ocorrera a atividade %d\n", i);
	 	scanf("%d", &vetorTarefa[i].hora);  //Armazena o valor do dia na posicao "i" do "vetorTarefa" no campo "hora"
	 	setbuf(stdin, NULL);
	 	
	 	printf("Digite somente a que minuto ocorrera a atividade %d\n", i);
	 	scanf("%d", &vetorTarefa[i].minuto);  //Armazena o valor do dia na posicao "i" do "vetorTarefa" no campo "minuto"
	 	setbuf(stdin, NULL);
	 	
	 	printf("Digite somente a que segundo ocorrera a atividade %d\n", i);
	 	scanf("%d", &vetorTarefa[i].segundo);  //Armazena o valor do dia na posicao "i" do "vetorTarefa" no campo "segundo"
	 	setbuf(stdin, NULL);

        printf("Digite a atividade %d\n", i);
	 	fgets(vetorTarefa[i].atividade, 40, stdin); //Armazena o nome da atividade na posicao "i" do "vetorTarefa" no campo "atividade"
	 	setbuf(stdin, NULL);
	    
	 }
	 
	printf("\n"); //Linha branca para separar os dados na impressao
	
	for(i = 1; i <= tarefas; i++) //Imprime as tarefas com os seus respectivos periodos de tempo a partir do tipo definido pela struct agenda
	 {
	   printf("%02d/%02d/%02d - %02d:%02d:%02d\n", vetorTarefa[i].dia, vetorTarefa[i].mes, vetorTarefa[i].ano, vetorTarefa[i].hora, vetorTarefa[i].minuto, vetorTarefa[i].segundo);
	   printf("%s", vetorTarefa[i].atividade);
     }
     
    return 0;
  }
