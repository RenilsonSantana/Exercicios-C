#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float valor;
	int qnt;
	printf("Quantos Hamb�rguer voc� consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+3*qnt;
	printf("Quantos Cheeseburger voc� consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+2.5*qnt;
	printf("Quantas Fritas voc� consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+2.5*qnt;
	printf("Quantos Refrigerantes voc� consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+1*qnt;
	printf("Quantos Milkshakes voc� consumiu?\n");
	scanf("%d", &qnt);
	valor = valor+3*qnt;
	system("cls");
	printf("Sua conta deu R$%.2f", valor);
}
