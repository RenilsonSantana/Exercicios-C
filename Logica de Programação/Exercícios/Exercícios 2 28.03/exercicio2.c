#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int ano, Idade;
	printf("Digite o ano em que voc� nasceu: ");
	scanf("%d", &ano);
	Idade=2017-ano;
	printf("voc� tem %d anos", Idade);
	
}
