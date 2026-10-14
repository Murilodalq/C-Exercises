#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int entrada, soma=0;
	
	for(int i = 1; i<=5; i++){
		printf("Digite a idade da pessoa %d:\n", i);
		scanf("%d", &entrada);
		soma += entrada;
	}
	printf("A média de idade destas pessoas é: %.2f\n", soma / 5.0);
}
