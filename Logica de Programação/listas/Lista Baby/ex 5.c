#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float c;
	printf("Digite a Temperatura em °C: ");
	scanf("%f", &c);
	printf("Equivalente em Fahrenheit: %.1f°F", c*9/5+32);
}
