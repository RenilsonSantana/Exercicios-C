#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main() {
	char Res;
	float c, f;
	setlocale(LC_ALL, "Portuguese");
	printf("--------------------------------\nCONVERSOR DE TEMPERATURA \n--------------------------------\nop��o (A) de Celsius para Fahrenheit. \nop��o (B) de Fahrenheit para Celsius.\nop��o:");
	scanf("%c", &Res);
	system("cls");
	if(Res == 'A' || Res == 'a'){
		printf("Digite Temperatura em Celsius: ");
		scanf("%f", &c);
		f=c*9/5+32;
		printf("A convers�o de %f�C para Fahrenheit �: %f�F", c, f);}
	else
		if(Res == 'B' ||Res == 'b'){
			printf("Digite Temperatura em Fahrenheit: ");
			scanf("%f", &f);
			c=(f-32)/1.8;
			printf("A convers�o de %.1f�F para Celsius �: %.1f�C", f, c);}	
		else
			printf("VOC� � BURRO PORRA?!!!! FALEI A OU B!");
}
