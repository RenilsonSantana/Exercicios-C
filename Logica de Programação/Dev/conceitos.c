#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char c;
	printf("Digite o seu conceito: ");
	scanf("%c", &c);
	switch(c) {
		case 'I':
		case 'i':
			printf("\nProcure o professor!");
			break;
		case 'R':
		case 'r':
			printf("\nEstude muito mais!");
			break;
		case 'B':
		case 'b':
			printf("\nEstude mais o material");
			break;
		case 'M':
		case 'm':
			printf("\nParabéns, estude outras coisas");
			break;
	}
}
