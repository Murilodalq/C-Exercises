#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//constantes
	
	//entradas
	float nota1, nota2, nota3, nota4;
	//saídas
	float media;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a nota do 1º bi:\n");
	scanf("%f", &nota1);
	printf("Digite a nota do 2º bi:\n");
	scanf("%f", &nota2);
	printf("Digite a nota do 3º bi:\n");
	scanf("%f", &nota3);
	printf("Digite a nota do 4º bi:\n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	
	if (media >= 6) {
		printf("Sua média foi %.1f. Você foi aprovado!", media);
	} else {
		printf("Sua média foi %.1f. Você foi reprovado!", media);
	}
}
