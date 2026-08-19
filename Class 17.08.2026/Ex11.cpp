#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//contantes
	
	//entradas
	float A=0, B=0, C=0;
	//saídas
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor A:\n");
	scanf("%f", &A);
	printf("Digite o valor B:\n");
	scanf("%f", &B);
	printf("Digite o valor C:\n");
	scanf("%f", &C);
	
	if (A >= B >= C) {
		printf("%.1f > %.1f > %.1f", A, B, C);
	} else if (A >= C >= B) {
		printf("%.1f > %.1f > %.1f", A, C, B);
	} else if (B >= A >= C) {
		printf("%.1f > %.1f > %.1f", B, A, C);
	} else if (B >= C >= A) {
		printf("%.1f > %.1f > %.1f", B, C, A);
	} else if (C >= A >= B) {
		printf("%.1f > %.1f > %.1f", C, A, B);
	} else if (C >= B >= A) {
		printf("%.1f > %.1f > %.1f", C, B, A);
	} else {
		printf("Erro desconhecido");
	}
}
