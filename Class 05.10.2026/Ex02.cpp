#include <stdio.h>
#include <locale.h>

main(){
	float altura, maior=0;
	
	setlocale(LC_ALL, "portuguese");
	
	for (int i = 1; i <= 6; i++){
		printf("Digite a altura da pessoa %d:\n", i);
		scanf("%f", &altura);
		
		if (altura > maior){
			maior = altura;
		}
	}
	printf("Maior altura: %.2f\n", maior);
}
