#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int entrada, qtdM3=0;
	
	for(int i=1; i<=10; i++){
		printf("Digite o número:\n");
		scanf("%d", &entrada);
		if (entrada % 3 == 0 && entrada != 0){
			qtdM3 +=1;
		}
	}
	printf("Multiplos de 3: %d\n", qtdM3);
}
