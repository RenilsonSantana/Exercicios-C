#include <stdio.h>
#include <locale.h>
void main() {
	char resposta;
	printf("Kayque tinha 9 namoradas, quantas namoradas Kayque tem?");
	printf("\nA) 3 \nB) 2 \nC) 7 \nD) 9 \nE) Nenhuma \n");
	scanf("%c", &resposta);
	if(resposta == 'D' || resposta == 'd')
		printf("Resposta Certa!");
	else
		printf("Resposta Errada!");
}
