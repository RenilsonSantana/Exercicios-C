#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um n�mero: ");
	scanf("%d", &num);
	printf("Voc� digitou: %d ;)", num);
}
