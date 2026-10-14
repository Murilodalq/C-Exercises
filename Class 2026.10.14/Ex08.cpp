#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	for (int i=10; i>=1; i--){
		printf("%d\n", i);
	}
	printf("Fim do tempo!");
}
