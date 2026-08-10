#include <stdio.h>

main(){
		float valor, pago, total, troco;
		int quantidade;
	printf("Digite o valor do produto:\n");
		scanf("%f", &valor);
	printf("Digite a quantidade:\n");
		scanf("%d", &quantidade);
	total = valor * quantidade;
	printf("O valor total e: R$%.2f, informe o valor pago:\n", total);
		scanf("%f", &pago);
	troco = pago - total;
	printf("O troco e de R$%.2f", troco);
}
