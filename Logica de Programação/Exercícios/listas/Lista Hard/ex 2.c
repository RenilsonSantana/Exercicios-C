#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float trab, list, prov;
	printf("Digite sua nota de trabalho de L�gica de programa��o: ");
	scanf("%f", &trab);
	trab = trab/5;
	printf("Digite sua nota da lista de L�gica de programa��o: ");
	scanf("%f", &list);
	list = list/3.33;
	printf("Digite sua nota da prova de L�gica de programa��o: ");
	scanf("%f", &prov);
	prov = prov/2;
	printf("Sua m�dia em L�gica de programa��o � %.1f.", trab+list+prov);
}
