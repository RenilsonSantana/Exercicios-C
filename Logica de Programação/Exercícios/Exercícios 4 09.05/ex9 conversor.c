#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int res;
	float n;
	printf("-------CONVERSOR DE MOEDAS-------\n\nEscolha uma opção\n\n1)Reais para Dolar\n2)Reais para Euro\n3)Reais para Yen\n\n");
	scanf("%d", &res);
	system("cls");
	switch(res) {
		case 1:
			printf("Digite o valor em R$ ");
			scanf("%f", &n);
			system("cls");
			printf("Digite o valor em R$ %.2f\n", n);
			printf("Equivalente em $ %.2f", n*0.32);
			break;
		case 2:
			printf("Digite o valor em R$ ");
			scanf("%f", &n);
			system("cls");
			printf("Digite o valor em R$ %.2f\n", n);
			printf("Equivalente em EUR %.2f", n*0.29);
			break;
		case 3:
			printf("Digite o valor em R$ ");
			scanf("%f", &n);
			system("cls");
			printf("Digite o valor em R$ %.2f\n", n);
			printf("Equivalente em ¥ %.2f", n*36.05);
			break;
		default:
			printf("OPÇÃO INVALIDA!");
	}
}
