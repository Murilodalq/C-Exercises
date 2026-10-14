#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	float peso;
	int qtdA=0, qtdI=0, qtdB=0;
	
	for (int i = 1; i<=7; i++){
		printf("Digite o peso da %dª pessoa:\n", i);
		scanf("%f", &peso);
		if (peso == 80){
			qtdI +=1;
		} else if (peso > 80){
			qtdA += 1;
		} else {
			qtdB += 1;
		}
	}
	printf("Pessoas acima de 80Kg: %d\n", qtdA);
	printf("Pessoas igual de 80Kg: %d\n", qtdI);
	printf("Pessoas abaixo de 80Kg: %d\n", qtdB);
}
