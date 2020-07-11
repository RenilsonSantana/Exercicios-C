#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int res, itens;
	float valor;
	char algomais;
	itens=0;
	algomais='s';
	while(algomais == 'S' || algomais == 's') {
		system("cls");
		printf("Selecione o número de uma pizza:\n\n1)Calabresa\n2)Palmito\n3)Bahiana\n4)Atum\n5)Frango com Catupiry\n6)Portuguesa\n7)Quatro QUeijos\n8)Mussarela\n9)Moda da Casa\n10)Chocolate\n\n");
		scanf("%d", &res);
		fflush(stdin);
		itens++;
		switch(res) {
			case 1:
				valor=valor+23;
				break;
			case 2:
				valor=valor+27;
				break;
			case 3:
				valor=valor+32;
				break;
			case 4:
				valor=valor+21;
				break;
			case 5:
				valor=valor+22;
				break;
			case 6:
				valor=valor+25;
				break;
			case 7:
				valor=valor+25;
				break;
			case 8:
				valor=valor+21;
				break;
			case 9:
				valor=valor+35;
				break;
			case 10:
				valor=valor+32;
				break;
			default:
				printf("Resposta invalida!");
		}
		printf("Deseja comprar mais algo (S/N)?");
		scanf("%c", &algomais);
		fflush(stdin);
	}
	system("cls");
	printf("Sua compra deu um total de R$%.2f\n\nVocê compro %d itens!", valor, itens);
}
