#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um número de (0 a 20): ");
	scanf("%d", &n);
	system("cls");
	switch(n) {
		case 0:
			printf("Você digitou zoro");
			break;
		case 1:
			printf("Você digitou um");
			break;
		case 2:
			printf("Você digitou dois");
			break;
		case 3:
			printf("Você digitou três");
			break;
		case 4:
			printf("Você digitou quatro");
			break;
		case 5:
			printf("Você digitou cinco");
			break;
		case 6:
			printf("Você digitou seis");
			break;
		case 7:
			printf("Você digitou sete");
			break;
		case 8:
			printf("Você digitou oito");
			break;
		case 9:
			printf("Você digitou nove");
			break;
		case 10:
			printf("Você digitou dez");
			break;
		case 11:
			printf("Você digitou onze");
			break;
		case 12:
			printf("Você digitou doze");
			break;
		case 13:
			printf("Você digitou treze");
			break;
		case 14:
			printf("Você digitou catorze");
			break;
		case 15:
			printf("Você digitou quinze");
			break;
		case 16:
			printf("Você digitou dezesseis");
			break;
		case 17:
			printf("Você digitou dezessete");
			break;
		case 18:
			printf("Você digitou dezoito");
			break;
		case 19:
			printf("Você digitou dezenove");
			break;
		case 20:
			printf("Você digitou vinte");
			break;
		default:
			printf("NÚMERO DE 0 A 20 POR FAVOR!");
	}
}
