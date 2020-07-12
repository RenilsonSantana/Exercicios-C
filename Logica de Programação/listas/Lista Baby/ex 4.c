#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	int n, c;
	float soma;
	for(c = 1; c <= 4; c++){
		printf("Digite o %dº número: ", c);
		scanf("%d", &n);
		soma += n;
	}
	printf("A média dos números digitados é igual a %f", soma/4);
}
