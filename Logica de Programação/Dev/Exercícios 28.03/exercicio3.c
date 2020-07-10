#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, soma, sub;
	printf("Digite um número: ");
	scanf("%d", &n1);
	printf("Digite outro número: ");
	scanf("%d", &n2);
	soma=n1+n2;
	sub=n1-n2;
	printf("a soma de %d e %d é igual a %d \ne a subtração igual a %d",n1,n2,soma,sub);
	
}
