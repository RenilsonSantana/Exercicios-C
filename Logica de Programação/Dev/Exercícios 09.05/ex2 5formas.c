#include <stdio.h>
#include <locale.h>
void main() {
	char res, car;
	setlocale(LC_ALL, "Portuguese");
	printf("Selecione o n�mero da forma em que vc quer desenhar:\n\n1)Triangulo\n2)Quadrado\n3)cora��o\n4)Arvore\n5)Losango\n");
	scanf("%c", &res);
	fflush(stdin);
	printf("Escolha um caracter: ");
	scanf("%c", &car);
	system("cls");
	switch(res) {
		case '1':
			printf("   %c\n  %c%c%c\n %c%c%c%c%c\n%c%c%c%c%c%c%c", car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car);
			break;
		case '2':
			printf("%c%c%c%c%c%c%c%c\n%c%c%c%c%c%c%c%c\n%c%c%c%c%c%c%c%c\n%c%c%c%c%c%c%c%c", car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car);
			break;
		case '3':
			printf(" %c%c %c%c\n%c%c%c%c%c%c%c\n %c%c%c%c%c\n  %c%c%c\n   %c", car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car);
			break;
		case '4':
			printf("   %c\n  %c%c%c\n %c%c%c%c%c\n%c%c%c%c%c%c%c\n   %c", car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car);
			break;
		case '5':
			printf("   %c\n  %c%c%c\n %c%c%c%c%c\n%c%c%c%c%c%c%c\n %c%c%c%c%c\n  %c%c%c\n   %c", car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car, car);
			break;
		default:
			printf("Resposta invalida!");
	}
}
