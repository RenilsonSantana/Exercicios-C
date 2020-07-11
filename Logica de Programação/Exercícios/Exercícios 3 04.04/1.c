#include <stdio.h>
void main() {
	int idade;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	if(idade >= 18)
		printf("Entrada Permitida!");
	else
		printf("Entrada Proibida!");
}
