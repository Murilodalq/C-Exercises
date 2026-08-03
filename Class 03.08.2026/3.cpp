#include <stdio.h>

main(){
	float valor_dol; float cota; float valor_reais;
	
	printf("digite o valor em dolares:\n");
	scanf("%f", &valor_dol);
	printf("digite a cotacao atual:\n");
	scanf("%f", &cota);
	valor_reais = valor_dol * cota;
	printf("O valor em reais e: %.2f", valor_reais);
	
}
