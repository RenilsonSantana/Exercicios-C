#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	float c, f;
	printf("Digite a Temperatura em (celsius): ");
	scanf("%f", &c);
	system("cls");
	printf("Digite a Temperatura em (celsius): %.1f°C \n", c);
	f = c*9/5+32;
	printf("Em Fahrenheit: %.1f°F\n\n", f);
	if(c > 36.5)
		printf("Está com Febre!");
	else
		printf("Não está com Frebe!");	
}
