#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	int num;
	//saídas
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número:\n");
	scanf("%d", &num);
	if (num >= 0) {
		printf("O número é positivo e ");
	} else {
		printf("O número é negativo e ");
	}
	if (num % 2 == 0) {
		printf("par");
	} else {
		printf("ímpar");
	}
}
