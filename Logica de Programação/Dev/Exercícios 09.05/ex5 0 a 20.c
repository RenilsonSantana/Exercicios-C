#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int n;
	printf("Digite um n�mero de (0 a 20): ");
	scanf("%d", &n);
	system("cls");
	switch(n) {
		case 0:
			printf("Voc� digitou zoro");
			break;
		case 1:
			printf("Voc� digitou um");
			break;
		case 2:
			printf("Voc� digitou dois");
			break;
		case 3:
			printf("Voc� digitou tr�s");
			break;
		case 4:
			printf("Voc� digitou quatro");
			break;
		case 5:
			printf("Voc� digitou cinco");
			break;
		case 6:
			printf("Voc� digitou seis");
			break;
		case 7:
			printf("Voc� digitou sete");
			break;
		case 8:
			printf("Voc� digitou oito");
			break;
		case 9:
			printf("Voc� digitou nove");
			break;
		case 10:
			printf("Voc� digitou dez");
			break;
		case 11:
			printf("Voc� digitou onze");
			break;
		case 12:
			printf("Voc� digitou doze");
			break;
		case 13:
			printf("Voc� digitou treze");
			break;
		case 14:
			printf("Voc� digitou catorze");
			break;
		case 15:
			printf("Voc� digitou quinze");
			break;
		case 16:
			printf("Voc� digitou dezesseis");
			break;
		case 17:
			printf("Voc� digitou dezessete");
			break;
		case 18:
			printf("Voc� digitou dezoito");
			break;
		case 19:
			printf("Voc� digitou dezenove");
			break;
		case 20:
			printf("Voc� digitou vinte");
			break;
		default:
			printf("N�MERO DE 0 A 20 POR FAVOR!");
	}
}
