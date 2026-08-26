#include <stdio.h>
#include <locale.h>

main(){
	//constantes
	int primo = 1;
	//entradas
	int num;
	//saídas
	
	
	setlocale(LC_ALL, "Portuguese");
	printf("Calculadora de números primos\n");
	printf("Digite o número limite:\n");
	scanf("%d", &num);
	printf("---------------------------\n");
	
	for (int i = 2; i <= num; i++) {
		for (int j = 2; (j * j <= i); j++) {
			if (i % j == 0) {
				primo = 0;
			}
		}
		if (primo == 1) {
			printf("%d\n", i);
		}
		primo = 1;
	}
}
