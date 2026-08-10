#include <stdio.h>

main(){
		float latao, zinco, cobre;
	printf("Digite o peso total de latao:\n");
		scanf("%f", &latao);
	cobre = latao * 0.7;
	zinco = latao * 0.3;
	printf("Cobre: %.2f\n", cobre);
	printf("Zinco: %.2f\n", zinco);
}
