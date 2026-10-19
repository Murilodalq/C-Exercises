#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");	
	int uIn, maior=-99999999999;
	
	do{
		printf("Digite um número (0-sair):\n");
		scanf("%d", &uIn);
		if (uIn > maior && uIn!=0){
			maior = uIn;
		}		
	}	while (uIn != 0);
	printf("Maior número: %d", maior);
}
