#include <stdio.h>
#include <locale.h>

main(){
	int num;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Digite um número menor que 10:\n");
	scanf("%d", &num);
	
	if (num < 10){
		for(int i=1; i<=10; i++){
			printf("%d x %d = %d\n", num, i, num * i);
		}	
	} else {
		printf("Por favor, digite um número válido.\n");
		main();
	}
	
}
