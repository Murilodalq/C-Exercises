#include <stdio.h>

main(){
		int ano_atual; int ano_nascimento; int idade;
	printf("digite o ano atual:\n");
	scanf("%d", &ano_atual);
	printf("digite o ano de nascimento:\n");
	scanf("%d", &ano_nascimento);
	idade = ano_atual - ano_nascimento;
	printf("sua idade e %d", idade);
	
}
