#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//contantes
	float regulamento = 50.0, taxa_kgExc = 4.0;
	//entradas
	float P;
	//saídas
	float E = 0.0, M = 0.0;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o peso de peixes:\n");
	scanf("%f", &P);
	
	if (P>regulamento) {
		E = P - regulamento;
		M = E * taxa_kgExc;
		printf("Há excesso.\n");
	} else {
		printf("Não há excesso.\n");
	}
	printf("Peso Excedente: %.1fKg\n", E);
	printf("Multa: R$%.1f\n", M);
}
