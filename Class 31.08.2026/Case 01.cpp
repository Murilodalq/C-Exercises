#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	int i;
	
	setlocale(LC_ALL, "Portuguese");
	printf("1. Bom dia\n");
	printf("2. Boa tarde\n");
	printf("3. Boa noite\n");
	printf("4. Seja bem-vindo\n");
	printf("5. Volte sempre\n");
	printf("Digite a opção desejada:\n");
	scanf("%d", &i);
	printf("--------------------------------\n");
	switch(i){
		case 1:
			printf("Bom dia\n");
			break;
		case 2:
			printf("Boa tarde\n");
			break;
		case 3:
			printf("Boa noite\n");
			break;
		case 4:
			printf("Seja bem-vindo\n");
			break;
		case 5:
			printf("Volte sempre\n");
			break;
		default:
			printf("Opção não existe\n");
			break;
	}
		
}
