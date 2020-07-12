#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float trab, list, prov;
	printf("Digite sua nota de trabalho de Lógica de programação: ");
	scanf("%f", &trab);
	trab = trab/5;
	printf("Digite sua nota da lista de Lógica de programação: ");
	scanf("%f", &list);
	list = list/3.33;
	printf("Digite sua nota da prova de Lógica de programação: ");
	scanf("%f", &prov);
	prov = prov/2;
	printf("Sua média em Lógica de programação é %.1f.", trab+list+prov);
}
