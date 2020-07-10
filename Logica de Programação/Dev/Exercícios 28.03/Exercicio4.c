#include <stdio.h>
#include <locale.h>
void main() {
	char car;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um caracter: ");
	scanf("%c", &car);
	printf("%c%c%c%c%c\n%c%c%c%c%c\n%c%c%c%c%c", car, car, car, car, car, car, car, car, car, car, car, car, car, car, car);
}
