#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float valor, dis, imp;
	printf("Informe o valor de fábrica do seu carro: R$");
	scanf("%f", &valor);
	dis = valor*12/100;
	imp = valor*45/100;
	printf("O valor final de seu carro será de R$%.2f", valor+dis+imp);
}
