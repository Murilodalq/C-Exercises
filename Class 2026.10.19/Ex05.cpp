#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");	
	int notas, saque, estoque=1000;
	
	do{
		printf("Digite o valor a ser sacado ou um valor negativo para sair:\n");
		scanf("%d", &saque);
		if (saque % 10 != 0){
			printf("Por favor, digite um valor múltiplo de 10.\n");
			continue;
		}
		if (saque > (estoque*10)){
			printf("Impossível sacar, digite um valor igual ou menor a: R$%d\n", estoque*10);
			continue;
		}
		notas = saque / 10;
		estoque -= notas;
		
		printf("Notas de R$10 sacadas: %d\n", notas);
	} while (saque >0);
}
