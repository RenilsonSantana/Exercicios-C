#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	int n, c;
	float soma;
	for(c = 1; c <= 4; c++){
		printf("Digite o %d� n�mero: ", c);
		scanf("%d", &n);
		soma += n;
	}
	printf("A m�dia dos n�meros digitados � igual a %f", soma/4);
}
