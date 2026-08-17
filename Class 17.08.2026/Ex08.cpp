#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//constantes
	
	//entradas
	char sexo[1];
	float h;
	//saídas
	float imc;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o sexo:(m/f)\n");
	gets(sexo);
	printf("Digite a altura:\n");
	scanf("%f", &h);
		getchar();
	
	if (strcmp(sexo, "m") == 0) {
		imc = (72.7*h) - 58;
	} else if (strcmp(sexo, "f") == 0) {
		imc = (62.1*h) - 44.7;
	} else {
		printf("digite um sexo válido");
		main();
	}
	printf("Seu peso ideal é %.2fKg", imc);
}
