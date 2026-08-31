#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	int gols_1, gols_2;
	char time_1[40], time_2[40];
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o nome do primeiro time:\n");
	fflush(stdin);
	fgets(time_1, 40, stdin);
	printf("Digite quantos gols o primeiro time marcou:\n");
	scanf("%d", &gols_1);
	printf("Digite o nome do segundo time:\n");
	fflush(stdin);
	fgets(time_2, 40, stdin);
	printf("Digite quantos gols o segundo time marcou:\n");
	scanf("%d", &gols_2);
	
	printf("---------------------------\n");
	if(gols_1 > gols_2){
		printf("%svenceu!", time_1);
	} else if (gols_2 > gols_1){
		printf("%svenceu!", time_2);
	} else if (gols_1 == gols_2){
		printf("Empate!");
	}									
}
