#include <stdio.h>

main(){
		float C = 0, F = 0;
	printf("Digite o valor em Fahrenheit:\n");
		scanf("%f", &F);
	C = (F – 32);
	C = C * (5/9);
	printf("A temperatura em Celsius e: %.1f\n", F);
}
