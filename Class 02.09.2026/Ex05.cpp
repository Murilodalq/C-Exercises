#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	char nome[60];
	float salario;
	//saídas
	float novo_salario;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome do jogador:\n");
	fflush(stdin);
	fgets(nome, 60, stdin);
	printf("Digite o salário atual:\n");
	scanf("%f", &salario);
	
	if (salario <= 1000){
		novo_salario = salario * 1.2;
	} else if (salario <=5000){
		novo_salario = salario * 1.1;
	} else {
		novo_salario = salario;
	}
	printf("------------------------\n");
	printf("--------Reajuste--------\n");
	printf("Jogador: %s\n", nome);
	printf("Salário anterior: R$%.2f\n", salario);
	printf("Salário reajustado: R$%.2f\n", novo_salario);
}
