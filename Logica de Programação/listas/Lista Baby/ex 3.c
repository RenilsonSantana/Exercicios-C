#include <stdio.h>
void main(){
	float nota;
	printf("Digite sua nota: ");
	scanf("%f", &nota);
	if(nota >= 5)
		printf("Aprovado!");
	else
		printf("Reprovado!");
}
