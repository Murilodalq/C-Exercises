#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//constantes
	
	//entradas
	float num1, num2;
	//saídas
	float dif;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o primeiro número:\n");
	scanf("%f", &num1);
	printf("Digite o segundo número:\n");
	scanf("%f", &num2);
	
	if (num1 > num2) {
		dif = num1 - num2;
	} else {
		dif = num2 - num1;
	}
	printf("A diferença do maior para o menor número é de: %.2f", dif);
}
