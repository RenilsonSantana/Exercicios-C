#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	int valor[20], c;
	for(c=0; c<=19; c++){
		printf("Digite o %dº número: ", c+1);
		fflush(stdin);
		scanf("%d", &valor[c]);
	}
	printf("\n\n\n");
	for(c=19; c>=0; c--){
		printf("%dº valor: valor %d\n", c+1, valor[c]);
	}
}
