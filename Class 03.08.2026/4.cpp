#include <stdio.h>

main(){
		float comissao = 0.05; float valor; float valor_comissao;
	
	printf("digite o valor da venda:\n");
	scanf("%f", &valor);
	valor_comissao = valor * comissao;
	printf("A comissao do vendedor e R$%.2f", valor_comissao);
}
