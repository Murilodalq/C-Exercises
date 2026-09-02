#include <stdio.h>
#include <locale.h>

main(){
	//entradas
	float nota1, nota2, nota3, nota4, exame;
	//saídas
	float media;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a primeira nota:\n");
	scanf("%f", &nota1);
	printf("Digite a segundanota:\n");
	scanf("%f", &nota2);
	printf("Digite a terceira nota:\n");
	scanf("%f", &nota3);
	printf("Digite a quarta nota:\n");
	scanf("%f", &nota4);
	
	media = (nota1 + nota2 + nota3 + nota4) / 4;
	if (media >=7){
		printf("Média final:%.2f\nAluno aprovado.", media);
    } else{
    	printf("Aluno precisa de exame.\nDigite a nota do exame:\n");
    	scanf("%f", &exame);
    	media = (media + exame) / 2;
    	if (media >= 5){
    		printf("Aluno aprovado com exame.\nMédia final: %.2f", media);
		} else{
			printf("Aluno reprovado com exame.\nMédia final: %.2f", media);
		}
	}
}
