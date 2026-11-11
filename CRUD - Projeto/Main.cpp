#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct tp_acao{
	int codigo, dia, mes, ano, qtdParticipantes, qtdPresentes=0;
	char escola[100], tema[100], publico[100], responsavel[100], situacao[10];
};

tp_acao acao, acoes[100];
int userIn, prox=1;
bool sair = false;

void menu(){
	printf("1 - Cadastrar Ação\n");
	printf("2 - Consultar Ações\n");
	printf("3 - Listar Ações\n");
	printf("4 - Atualizar Situação\n");
	printf("5 - Gerar Resumo\n");
	printf("6 - Sair do Sistema\n");
	printf("Digite o número da ação que deseja realizar:\n");
}

void cadastro(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	if (prox > 100){
		printf("Cadastro cheio!\n");
		
	}
	printf("Código: \n");
	scanf("%d", &acao.codigo);
	printf("Digite a escola:\n");
	fflush(stdin);
	fgets(acao.escola, 100, stdin);
	printf("Digite o tema:\n");
	fflush(stdin);
	fgets(acao.tema, 100, stdin);
	printf("Digite o ano previsto: \n");
	scanf("%d", &acao.ano);
	printf("Digite o mes (número) previsto: \n");
	scanf("%d", &acao.mes);
	printf("Digite o dia previsto: \n");
	scanf("%d", &acao.dia);
	printf("Digite o público alvo:\n");
	fflush(stdin);
	fgets(acao.publico, 100, stdin);
	printf("Digite o responsável:\n");
	fflush(stdin);
	fgets(acao.responsavel, 100, stdin);
	printf("Digite a quantidade prevista de participantes: \n");
	scanf("%d", &acao.qtdParticipantes);
	printf("indique a situação inicial:\n1. Realizada\n2. Planejada\n3. Cancelada\n");
	scanf("%d", &op);
	switch (op){
			case 1:
				strcpy(acao.situacao,"Realizada");
				printf("Qual a quantidade efetiva de participantes?\n");
				scanf("%d", &acao.qtdPresentes);
				break;
			case 2:
				strcpy(acao.situacao,"Planejada");
				break;
			case 3:
				strcpy(acao.situacao,"Cancelada");
				break;
			default:
				printf("Digite uma opção válida da próxima vez!\n");
				break;
	}
	acoes[prox - 1] = acao;
	prox+=1;
}

void consulta(){
	setlocale(LC_ALL, "Portuguese");
	int op, pesqCod, comp;
	char pesqOutro[100];
	printf("pesquisar por:\n1. Código\n2. Escola\n3. Tema\n");
	scanf("%d", &op);
	system("CLS");
	switch (op){
		case 1:
			printf("Digite o código da ação que deseja pesquisar:\n");
			scanf("%d", &pesqCod);
			for (int i=0; i <prox; i++){			
				if (pesqCod == acoes[i].codigo){		
					printf("\n=======Ação=======\n");
					printf("Código: %d\n", acoes[i].codigo);
					printf("Escola: %s\n", acoes[i].escola);
					printf("Tema: %s\n", acoes[i].tema);
					printf("Data: %d/%d/%d\n", acoes[i].dia, acoes[i].mes, acoes[i].ano);
					printf("Público alvo: %s\n", acoes[i].publico);
					printf("Responsável: %s\n", acoes[i].responsavel);
					printf("Quantidade prevista de participantes: %d\n", acoes[i].qtdParticipantes);
					printf("Quantidade de participantes presentes: %d\n", acoes[i].qtdPresentes);
					printf("Situação: %s\n", acoes[i].situacao);
					printf("==================\n");
				}
			}
			break;
		case 2:
			printf("Digite a escola:\n");
			fflush(stdin);
			fgets(pesqOutro, 100, stdin);
			
			for (int i=0; i <prox; i++){
			comp = strcmp(pesqOutro, acoes[i].escola);			
				if (comp == 0){		
					printf("\n=======Ação=======\n");
					printf("Código: %d\n", acoes[i].codigo);
					printf("Escola: %s\n", acoes[i].escola);
					printf("Tema: %s\n", acoes[i].tema);
					printf("Data: %d/%d/%d\n", acoes[i].dia, acoes[i].mes, acoes[i].ano);
					printf("Público alvo: %s\n", acoes[i].publico);
					printf("Responsável: %s\n", acoes[i].responsavel);
					printf("Quantidade prevista de participantes: %d\n", acoes[i].qtdParticipantes);
					printf("Situação: %s\n", acoes[i].situacao);
					printf("==================\n");
				}
			}
			break;
		case 3:
			printf("Digite o tema:\n");
			fflush(stdin);
			fgets(pesqOutro, 100, stdin);
			
			for (int i=0; i <prox; i++){
			comp = strcmp(pesqOutro, acoes[i].tema);			
				if (comp == 0){		
					printf("\n=======Ação=======\n");
					printf("Código: %d\n", acoes[i].codigo);
					printf("Escola: %s\n", acoes[i].escola);
					printf("Tema: %s\n", acoes[i].tema);
					printf("Data: %d/%d/%d\n", acoes[i].dia, acoes[i].mes, acoes[i].ano);
					printf("Público alvo: %s\n", acoes[i].publico);
					printf("Responsável: %s\n", acoes[i].responsavel);
					printf("Quantidade prevista de participantes: %d\n", acoes[i].qtdParticipantes);
					printf("Situação inicial: %s\n", acoes[i].situacao);
					printf("==================\n");
				}
			}
			break;
		default:
			printf("Digite um valor válido!\n");
			break;
	}
	system("pause");
}

void lista(){
	setlocale(LC_ALL, "Portuguese");
	for (int i=0; i < prox-1; i++){
		printf("\n=======Ação=======\n");
				printf("Código: %d\n", acoes[i].codigo);
				printf("Escola: %s\n", acoes[i].escola);
				printf("Tema: %s\n", acoes[i].tema);
				printf("Data: %d/%d/%d\n", acoes[i].dia, acoes[i].mes, acoes[i].ano);
				printf("Público alvo: %s\n", acoes[i].publico);
				printf("Responsável: %s\n", acoes[i].responsavel);
				printf("Quantidade prevista de participantes: %d\n", acoes[i].qtdParticipantes);
				printf("Situação inicial: %s\n", acoes[i].situacao);
				printf("==================\n");
	}
	system("pause");
}

void atualiza(){
	setlocale(LC_ALL, "Portuguese");
	int codAcao, op, qtdAtualizada;

	printf("Digite o código da ação que deseja atualizar:\n");
	scanf("%d", &codAcao);
	for (int i=0; i <prox; i++){			
		if (codAcao == acoes[i].codigo){		
			printf("\n=======Ação=======\n");
			printf("Código: %d\n", acoes[i].codigo);
			printf("Escola: %s\n", acoes[i].escola);
			printf("Tema: %s\n", acoes[i].tema);
			printf("Data: %d/%d/%d\n", acoes[i].dia, acoes[i].mes, acoes[i].ano);
			printf("Público alvo: %s\n", acoes[i].publico);
			printf("Responsável: %s\n", acoes[i].responsavel);
			printf("Quantidade prevista de participantes: %d\n", acoes[i].qtdParticipantes);
			printf("Situação inicial: %s\n", acoes[i].situacao);
			printf("==================\n");
			codAcao = i;
		}
	}
		printf("Atualizar situação para?:\n1. Realizada\n2. Planejada\n3. Cancelada\n");
		scanf("%d", &op);
		switch (op){
			case 1:
				strcpy(acao.situacao,"Realizada");
				printf("Atualizada com sucesso!\n");
				printf("Qual a quantidade efetiva de participantes?\n");
				scanf("%d", qtdAtualizada);
				acoes[codAcao].qtdPresentes = qtdAtualizada;
				break;
			case 2:
				strcpy(acao.situacao,"Planejada");
				printf("Atualizada com sucesso!\n");
				break;
			case 3:
				strcpy(acao.situacao,"Cancelada");
				printf("Atualizada com sucesso!\n");
				break;
			default:
				printf("Digite uma opção válida da próxima vez!\n");
				break;
		}
	system("pause");
}

void resume(){
	setlocale(LC_ALL, "Portuguese");
	int qtdRealizada=0, qtdPlanejada=0, qtdCancelada=0, comp;
	float percentParticipacao, totalParticipantes=0.0, totalPrevisto=0.0;
	for (int i=0; i < prox-1; i++){
		comp = strcmp(acoes[i].situacao, "Realizada");
		if (comp == 0){
			qtdRealizada += 1;
			totalParticipantes += acoes[i].qtdPresentes;
			totalPrevisto += acoes[i].qtdParticipantes;		
		}
		comp = strcmp(acoes[i].situacao, "Planejada");
		if (comp == 0){
			qtdPlanejada += 1;
		}
		comp = strcmp(acoes[i].situacao, "Cancelada");
		if (comp == 0){
			qtdCancelada += 1;
		}
	}
	percentParticipacao = totalParticipantes / totalPrevisto;
	printf("=========Resumo=========\n");
	printf("Ações Realizadas: %d\n", qtdRealizada);
	printf("Ações Planejadas: %d\n", qtdPlanejada);
	printf("Ações Canceladas: %d\n", qtdCancelada);
	printf("Total de participantes: %.0f\n", totalParticipantes);
	printf("Participação: %.1f%%\n", percentParticipacao*100);
	printf("========================\n");
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
				atualiza();
				break;
			case 5:
				system("CLS");
				resume();
				break;
			case 6:
				sair = true;
				break;
			default:
				printf("Digite um valor válido!\n");
				break;
		}
	}
}
