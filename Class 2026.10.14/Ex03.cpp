#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num, fat=1;
	
	printf("Digite o número para fatoriar:\n");
	scanf("%d", &num);
	
	for(int i=num; i>=1; i--){
		fat = fat * i;
	}
	printf("Fatoral do número %d: %d\n", num, fat);
}
