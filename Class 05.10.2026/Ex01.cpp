#include <stdio.h>
#include <locale.h>

main(){
	int qtdPar=0, qtdImpar=0, num;
	
	setlocale(LC_ALL, "portuguese");
	
	for(int i=1; i<=5; i++){
		printf("Digite o número %d:\n", i);
		scanf("%d", &num);
		if (num%2==0){
			qtdPar += 1;
		} else {
			qtdImpar +=1;
		}
	}
	printf("Quantidade de pares: %d\n", qtdPar);
	printf("Quantidade de Ímpares: %d\n", qtdImpar);
}	
