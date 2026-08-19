#include <stdio.h>
#include <locale.h>
#include <string.h>

main(){
	//contantes
	
	//entradas
	int idade;
	//saídas
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a idade do nadador:\n");
	scanf("%d", &idade);
	if (idade < 5) {
		printf("A categoria do nadador é fraldinha");
	} else if (5 < idade <= 7) {
		printf("A categoria do nadador é pré-mirim");
	} else if (8 <= idade <= 11) {
		printf("A categoria do nadador é mirim");
	} else if (12 <= idade <= 13) {
		printf("A categoria do nadador é infantil");
	} else if (14 <= idade <= 17) {
		printf("A categoria do nadador é juvenil");
	} else if (idade >= 18) {
		printf("A categoria do nadador é adulto");
	}
}
