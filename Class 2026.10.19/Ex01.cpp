#include <stdio.h>
#include <locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");	
	int i=0;
	while ( i <= 30){
		if (i%2 !=0){
			printf("%d\n", i);
		}
		i +=1;
	}
}
