#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char res;
	printf("Selecione o número de uma pizza:\n\n1)Calabresa\n2)Palmito\n3)Bahiana\n4)Atum\n5)Frango com Catupiry\n6)Portuguesa\n7)Quatro QUeijos\n8)Mussarela\n9)Moda da Casa\n0)Chocolate\n\n");
	scanf("%c", &res);
	system("cls");
	switch(res) {
		case '1':
			printf("Calabresa R$ 23,00");
			break;
		case '2':
			printf("Palmito R$ 27,00");
			break;
		case '3':
			printf("Bahiana R$ 32,00");
			break;
		case '4':
			printf("Atum R$ 21,00");
			break;
		case '5':
			printf("Frango com Catupiry R$ 22,00");
			break;
		case '6':
			printf("Portuguesa R$ 25,00");
			break;
		case '7':
			printf("Quatro Queijos R$ 25,00");
			break;
		case '8':
			printf("Mussarela R$ 21,00");
			break;
		case '9':
			printf("Moda da Casa R$ 35,00");
			break;
		case '0':
			printf("Chocolate R$ 32,00");
			break;
		default:
			printf("Resposta invalida!");
	}
}
