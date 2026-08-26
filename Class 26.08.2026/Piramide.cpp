#include <stdio.h>
#include <locale.h>

main(){
	//constantes
	int count = 1;
	//entradas
	int num;
	//saídas
	
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o número de linhas da pirâmide:\n");
	scanf("%d", &num);
	printf("--------------------\n");
	
	for(int i = 1; i <= num; i++){
		for(int j = 1; j<=i; j++){
			printf("%d ", count);
			count++;
			if (j == i){
				printf("\n");
			}
		}
	}
}
