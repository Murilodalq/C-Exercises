#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	int base, expoente;
	float potencia=1;
	
	printf("Digite a base:\n");
	scanf("%d", &base);
	printf("Digite o expoente:\n");
	scanf("%d", &expoente);
	

	if (expoente >0){
		for(int i=1; i<=expoente; i++){
			potencia *= base;
		}
	} else if (expoente <0){
		for(int i=1; i<=(expoente*-1); i++){
			potencia *= base;
		}
		potencia = 1.0/potencia;
	}
	printf("%d^%d = %f\n", base, expoente, potencia);
}
