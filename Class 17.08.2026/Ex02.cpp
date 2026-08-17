#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	int num;
	//saídas
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número inteiro:\n");
	scanf("%d", &num);
	if (num > 0 ){
		printf("O módulo do número é: %d",num);
	} else { 
		printf("O módulo do número é: %d", num * -1);
	}
}
