#include <stdio.h>
#include <locale.h>
void main () {
	setlocale(LC_ALL, "Portuguese");
	char let;
	printf("Digite uma LETRA DO ALFABETO: ");
	scanf("%c", &let);
	system("cls");
	switch(let){
		case 'A':
		case 'a':
			printf("Primeira letra do alfabeto");
			break;
		case 'B':
		case 'b':
			printf("Segunda letra do alfabeto");
			break;
		case 'C':
		case 'c':
			printf("Terceira letra do alfabeto");
			break;
		case 'D':
		case 'd':
			printf("Quarta letra do alfabeto");
			break;
		case 'E':
		case 'e':
			printf("Quinta letra do alfabeto");
			break;
		case 'F':
		case 'f':
			printf("Sexta letra do alfabeto");
			break;
		case 'G':
		case 'g':
			printf("Setima letra do alfabeto");
			break;
		case 'H':
		case 'h':
			printf("Oitava letra do alfabeto");
			break;
		case 'I':
		case 'i':
			printf("Nona letra do alfabeto");
			break;
		case 'J':
		case 'j':
			printf("D�cima letra do alfabeto");
			break;
		case 'K':
		case 'k':
			printf("D�cima primeira letra do alfabeto");
			break;
		case 'L':
		case 'l':
			printf("D�cima segunda letra do alfabeto");
			break;
		case 'M':
		case 'm':
			printf("D�cima terceira letra do alfabeto");
			break;
		case 'N':
		case 'n':
			printf("D�cima quarta letra do alfabeto");
			break;
		case 'O':
		case 'o':
			printf("D�cima quinta letra do alfabeto");
			break;
		case 'P':
		case 'p':
			printf("D�cima sexta letra do alfabeto");
			break;
		case 'Q':
		case 'q':
			printf("D�cima setima letra do alfabeto");
			break;
		case 'R':
		case 'r':
			printf("D�cima oitava letra do alfabeto");
			break;
		case 'S':
		case 's':
			printf("D�cima nona letra do alfabeto");
			break;
		case 'T':
		case 't':
			printf("Vig�sima letra do alfabeto");
			break;
		case 'U':
		case 'u':
			printf("Vig�sima primeira letra do alfabeto");
			break;
		case 'V':
		case 'v':
			printf("Vig�sima segunda letra do alfabeto");
			break;
		case 'W':
		case 'w':
			printf("Vig�sima terceira letra do alfabeto");
			break;
		case 'X':
		case 'x':
			printf("Vig�sima quarta letra do alfabeto");
			break;
		case 'Y':
		case 'y':
			printf("Vig�sima quinta letra do alfabeto");
			break;
		case 'Z':
		case 'z':
			printf("Vig�sima sexta letra do alfabeto");
		default:
			printf("IASTO N�O FAZ PARTE DO ALFABETO!");
	}
}

