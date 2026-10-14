#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	bool primo = true;
	
	printf("Digite o número:\n");
	scanf("%d", &num);
	
	for (int j = 2; (j * j <= num); j++) {
			if (num % j == 0) {
				primo = false;
			}
		}
	if (primo == true){
		printf("%d é um número primo", num);
	} else {
		printf("%d não é um número primo", num);
	}
}
