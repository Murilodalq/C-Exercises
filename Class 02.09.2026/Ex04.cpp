#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	float vmax, vel;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a valocidade máxima permitida:\n");
	scanf("%f", &vmax);
	printf("Digite a velocidade do veículo:\n");
	scanf("%f", &vel);
	
	if (vel <= vmax){
		printf("Velocidade permitida\n");
	} else if (vel <= (vmax * 1.20)) {
		printf("Multa grave");
	} else {
		printf("Multa gravíssima");
	}
}
