#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int soma=0;
	
	for (int i=1; i<=50; i++){
		if (i%2==0){
			soma += i;
		}
	}
	printf("Soma dos pares de 1 a 50: %d\n", soma);
}
