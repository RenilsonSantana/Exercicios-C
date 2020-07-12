#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float chuva;
	printf("Choveu quantas polegadas?\n");
	scanf("%f", &chuva);
	printf("Equivalente em milímitros: %.1fmm", chuva*25.4);
}
