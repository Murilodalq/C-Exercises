#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//constantes
	float maca = 1.3, maca_12= 1.0;
	//entradas
	int qtd_maca;
	//saídas
	float preco;
		
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a quantidade de maçãs:\n");
	scanf("%d", &qtd_maca);
	if (qtd_maca >=12) {
		preco = qtd_maca * maca_12;
	} else {
		preco = qtd_maca * maca;
	}
	printf("O preço da compra é de R$%.2f", preco);
}
