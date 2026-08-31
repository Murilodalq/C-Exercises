#include <stdio.h>
#include <locale.h>

main(){
	//entrada
	int user_input;
	float num1, num2;
	
	setlocale(LC_ALL, "Portuguese");
	printf("1. Adição\n");
	printf("2. Subtração\n");
	printf("3. Divisão\n");
	printf("4. Multiplicação\n");
	printf("Que operação deseja realizar?\n");
	scanf("%d", &user_input);
	
	switch(user_input){
		case 1:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &num1);
			printf("Digite o segundo valor:\n");
			scanf("%f", &num2);
			printf("Resultado: %.2f", num1 + num2);
			break;
		case 2:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &num1);
			printf("Digite o segundo valor:\n");
			scanf("%f", &num2);
			printf("Resultado: %.2f", num1 - num2);
			break;
		case 3:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &num1);
			printf("Digite o segundo valor:\n");
			scanf("%f", &num2);
			printf("Resultado: %.2f", num1 / num2);
			break;
		case 4:
			printf("Digite o primeiro valor:\n");
			scanf("%f", &num1);
			printf("Digite o segundo valor:\n");
			scanf("%f", &num2);
			printf("Resultado: %.2f", num1 * num2);
			break;
	}
}
