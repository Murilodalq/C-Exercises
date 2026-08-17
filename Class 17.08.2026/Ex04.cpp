#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//constantes
	float preco_gas = 6.5, preco_alcool = 4.5;
	//entradas
	char tipo_carro[20];
	float tanque;
	//saídas
	float custo;
	
	setlocale(LC_ALL, "Portuguese");
	printf("O carro é movido à gasolina ou a álcool?(g/a)\n");
	gets(tipo_carro);
	printf("Quantos litros para encher?\n");
	scanf("%f", &tanque);
	getchar();
	
	if (strcmp(tipo_carro, "g") == 0 || strcmp(tipo_carro, "gasolina") == 0 || strcmp(tipo_carro, "G") == 0 || strcmp(tipo_carro, "Gasolina") == 0) {
		custo = tanque * preco_gas;
	} else if (strcmp(tipo_carro, "a") == 0 || strcmp(tipo_carro, "alcool") == 0 || strcmp(tipo_carro, "A") == 0 || strcmp(tipo_carro, "Alcool") == 0 || strcmp(tipo_carro, "Álcool") == 0 || strcmp(tipo_carro, "álcool") == 0) {
		custo = tanque * preco_alcool;
	} else {
		printf("Por favor, insira um tipo válido\n");
		main();
	}
	printf("O custo para encher o tanque é de R$%.2f", custo);
}
