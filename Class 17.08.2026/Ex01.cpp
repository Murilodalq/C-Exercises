#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	float conta;
	//saídas
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o gasto com energia:\n");
	scanf("%f", &conta);
	if (conta > 50) {
		printf("Você está gastando muito");
	}	else {
		printf("Seu gasto foi normal");
	}
}
