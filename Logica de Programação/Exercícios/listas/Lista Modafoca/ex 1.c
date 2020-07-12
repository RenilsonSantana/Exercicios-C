#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float valor;
	int qnt;
	printf("Quantos Hambúrguer você consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+3*qnt;
	printf("Quantos Cheeseburger você consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+2.5*qnt;
	printf("Quantas Fritas você consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+2.5*qnt;
	printf("Quantos Refrigerantes você consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+1*qnt;
	printf("Quantos Milkshakes você consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+3*qnt;
	system("cls");
	printf("Sua conta deu R$%.2f", valor);
}
