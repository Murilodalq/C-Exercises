#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	float temp;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a temperatura:\n");
	scanf("%f", &temp);
	
	if (temp < 100){
		printf("Temperatura muito baixa!\n");
	} else if (100 <= temp && temp <=200){
		printf("Temperatura baixa\n");
	} else if( 200 < temp && temp < 500){
		printf("Temperatura ideal\n");
	} else{
		printf("Temperatura muito alta!\n");
	}
}
	

