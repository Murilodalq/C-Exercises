#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");	
	int uIn, qtd1=0, qtd2=0, qtd3=0, qtdB=0, qtdN=0;
	
	do{
		printf("1 - Candidato 1\n2 - Candidato 2\n3 - Candidato 3\n4 - Voto em Branco\n5 - Voto Nulo\n0 - Encerrar Apuração\n");
		scanf("%d", &uIn);
		
		switch(uIn){
			case 1:
				qtd1 +=1;
				break;
			case 2:
				qtd2 +=1;
				break;
			case 3:
				qtd3 +=1;
				break;
			case 4:
				qtdB +=1;
				break;
			case 5:
				qtdN +=1;
			case 0:
				printf("Encerrando apuração.\n");
				break;
			default:
				printf("Selecione um comando válido.\n");
				break;
		}
	} while (uIn != 0);
	printf("===== Apuração =====\n");
	printf("Candidato 1: %d votos\n", qtd1);
	printf("Candidato 2: %d votos\n", qtd2);
	printf("Candidato 3: %d votos\n", qtd3);
	printf("Branco: %d votos\n", qtdB);
	printf("Nulo: %d votos\n", qtdN);
}

