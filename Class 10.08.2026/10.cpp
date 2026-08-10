#include <stdio.h>

main(){
		int A, B, C;
	printf("Digite o valor de A:\n");
		scanf("%d", &A);
	printf("Digite o valor de B:\n");
		scanf("%d", &B);
	printf("A inicial: %d\n", A);
	printf("B inicial: %d\n", B);
	printf("Realizando trocas. . .\n");
	C = A;
	A = B;
	B = C;
	printf("A final: %d\n", A);
	printf("B final %d\n", B);		
}
