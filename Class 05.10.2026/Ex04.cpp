#include <stdio.h>
#include <locale.h>

main(){
	int soma=0;	
		
	setlocale(LC_ALL, "portuguese");
	
	for(int i=10; i<=20; i++){
		if (i % 2 != 0){
			printf("%d + %d = %d\n", soma, i, soma + i);
			soma += i;
		}
	}
	printf("Soma dos número Ímpares de 10 à 20: %d", soma);
}
