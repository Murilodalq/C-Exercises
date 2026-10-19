#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");	
	int uIn;
	
	do{
		printf("1 - SAUDAÇÃO\n2 - BRONCA\n3 - FELICITAÇÃO\n0 - FIM\n");
		scanf("%d", &uIn);
		
		switch(uIn){
			case 1:
				printf("Olá, como vai?\n");
				break;
			case 2:
				printf("Vamos estudar mais.\n");
				break;
			case 3:
				printf("Meus Parabéns!\n");
				break;
			case 0:
				printf("Fim de serviço.\n");
				break;
			default:
				printf("Insira um comando válido.\n");
				break;
		}
	} while (uIn != 0);
}
