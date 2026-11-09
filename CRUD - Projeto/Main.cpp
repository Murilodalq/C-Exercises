#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct tp_produto{
	int codigo;
	char nome[100];
	float valor;
};

tp_produto produto, produtos[100];
int userIn, codigoAtual = 1, prox=1;
bool sair = false;

void menu(){
	printf("1 - Cadastrar\n");
	printf("2 - Consultar\n");
	printf("3 - Listar\n");
	printf("4 - Remover\n");
	printf("5 - Sair do Sistema\n");
}

void cadastro(){
	if (prox > 100){
		printf("Cadastro cheio!\n");
		
	}
	printf("Código: %d\n", codigoAtual);
	produto.codigo = codigoAtual;
	codigoAtual +=1;
	printf("Digite o nome do produto:\n");
	fflush(stdin);
	fgets(produto.nome, 100, stdin);
	printf("Digite o valor do produto:\n");
	scanf("%f", &produto.valor);
	produtos[prox - 1] = produto;
	prox+=1;
}

void consulta(){
	int pesquisa;
	printf("Digite o código do produto:\n");
	scanf("%d", &pesquisa);
	if (pesquisa <= codigoAtual-1){		
		printf("=====Produto=====\n");
		printf("Código: %d\n", produtos[pesquisa-1].codigo);
		printf("Nome: %s\n", produtos[pesquisa-1].nome);
		printf("Valor: %.2f\n", produtos[pesquisa-1].valor);
		printf("=================\n\n");
	} else {
		printf("Produto não encontrado / não cadastrado\n");
	}
	system("pause");
}

void lista(){
	for (int i=0; i < prox-1; i++){
		printf("=====Produto=====\n");
		printf("Código: %d\n", produtos[i].codigo);
		printf("Nome: %s\n", produtos[i].nome);
		printf("Valor: %.2f\n", produtos[i].valor);
	}
	printf("=================\n\n");
	system("pause");
}

void remove(){
	int codProdRem, op;

	printf("Digite o código do produto que deseja remover:\n");
	scanf("%d", &codProdRem);
	if (codProdRem <= codigoAtual-1){		
		printf("=====Produto=====\n");
		printf("Código: %d\n", produtos[codProdRem-1].codigo);
		printf("Nome: %s\n", produtos[codProdRem-1].nome);
		printf("Valor: R$%.2f\n", produtos[codProdRem-1].valor);
		printf("=================\n\n");
		printf("Deseja realmente remover este produto?:\n");
		scanf("%d", &op);
		switch (op){
			case 1:
				produtos[codProdRem-1].codigo = produtos[prox-2].codigo;
				strcpy(produtos[codProdRem-1].nome, produtos[prox-2].nome);
				produtos[codProdRem-1].valor = produtos[prox-2].valor;
				prox--;
				printf("Exluído com sucesso!\n");
				break;
			case 2:
				printf("Cancelando. . .\n");
				break;
			default:
				printf("Digite uma opção válida da próxima vez!\n");
				break;
		}
	} else {
		printf("Produto não encontrado / não cadastrado\n");
	}
	system("pause");
}

main(){
	setlocale(LC_ALL, "Portuguese");
	while (sair == false){
		system("CLS");
		menu();
		scanf("%d", &userIn);
		switch(userIn){
			case 1:
				system("CLS");
				cadastro();
				break;
			case 2:
				system("CLS");
				consulta();
				break;
			case 3:
				system("CLS");
				lista();
				break;
			case 4:
				system("CLS");
				remove();
				break;
			case 5:
				sair = true;
				break;
			default:
				printf("Digite um valor válido!\n");
				break;
		}
	}
}
