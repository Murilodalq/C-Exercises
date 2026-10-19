#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");	
	float nota, soma, media;
	

		printf("Escreva a primeira nota:\n");
		scanf("%f", &nota);
		if (nota <0 || nota >10){
			printf("Por favor, digite uma nota válida!\n");
			main();
		}
		soma=0;
		soma +=(nota);
		printf("Escreva a segunda nota:\n");
		scanf("%f", &nota);
		if (nota <0 || nota >10){
			printf("Por favor, digite uma nota válida!\n");
			main();
		}
		soma +=nota;
		media = soma /2;
		printf("Média do aluno: %.2f\n", media);
}
