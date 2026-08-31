#include <stdio.h>
#include <locale.h>

main(){
	//entrada
	char apto;
	int dia;
	float consumo;
	
	setlocale(LC_ALL, "Portuguse");
	printf("Tipos de apartamento\n");
	printf("A. R$150,00 por dia\n");
	printf("B. R$100,00 por dia\n");
	printf("C. R$75,00 por dia\n");
	printf("D. R$50,00 por dia\n");
	printf("Qual apartamento foi escolhido?\n");
	scanf("%c", &apto);
	
	switch(apto){
		case 'a':
			printf("Digite a quantidade de dias:\n");
			scanf("%d", &dia);
			printf("Digite o consumo adicional:\n");
			scanf("%f", &consumo);
			printf("Custo total: R$%.2f\n", (150 * dia) + consumo);
		case 'b':
			printf("Digite a quantidade de dias:\n");
			scanf("%d", &dia);
			printf("Digite o consumo adicional:\n");
			scanf("%f", &consumo);
			printf("Custo total: R$%.2f\n", (100 * dia) + consumo);
		case 'c':
			printf("Digite a quantidade de dias:\n");
			scanf("%d", &dia);
			printf("Digite o consumo adicional:\n");
			scanf("%f", &consumo);
			printf("Custo total: R$%.2f\n", (75 * dia) + consumo);
		case 'd':
			printf("Digite a quantidade de dias:\n");
			scanf("%d", &dia);
			printf("Digite o consumo adicional:\n");
			scanf("%f", &consumo);
			printf("Custo total: R$%.2f\n", (50 * dia) + consumo);
	}
}
