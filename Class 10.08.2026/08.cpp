#include <stdio.h>

main(){
		float C, F;
	printf("Digite o valor em Celsius:\n");
		scanf("%f", &C);
	F = (9 * C + 160) / 5;
	printf("A temperatura em Fahrenheit e: %.1f\n", F);
}
