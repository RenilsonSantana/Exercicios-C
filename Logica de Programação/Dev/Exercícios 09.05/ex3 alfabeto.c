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
			printf("Décima letra do alfabeto");
			break;
		case 'K':
		case 'k':
			printf("Décima primeira letra do alfabeto");
			break;
		case 'L':
		case 'l':
			printf("Décima segunda letra do alfabeto");
			break;
		case 'M':
		case 'm':
			printf("Décima terceira letra do alfabeto");
			break;
		case 'N':
		case 'n':
			printf("Décima quarta letra do alfabeto");
			break;
		case 'O':
		case 'o':
			printf("Décima quinta letra do alfabeto");
			break;
		case 'P':
		case 'p':
			printf("Décima sexta letra do alfabeto");
			break;
		case 'Q':
		case 'q':
			printf("Décima setima letra do alfabeto");
			break;
		case 'R':
		case 'r':
			printf("Décima oitava letra do alfabeto");
			break;
		case 'S':
		case 's':
			printf("Décima nona letra do alfabeto");
			break;
		case 'T':
		case 't':
			printf("Vigésima letra do alfabeto");
			break;
		case 'U':
		case 'u':
			printf("Vigésima primeira letra do alfabeto");
			break;
		case 'V':
		case 'v':
			printf("Vigésima segunda letra do alfabeto");
			break;
		case 'W':
		case 'w':
			printf("Vigésima terceira letra do alfabeto");
			break;
		case 'X':
		case 'x':
			printf("Vigésima quarta letra do alfabeto");
			break;
		case 'Y':
		case 'y':
			printf("Vigésima quinta letra do alfabeto");
			break;
		case 'Z':
		case 'z':
			printf("Vigésima sexta letra do alfabeto");
		default:
			printf("IASTO NÃO FAZ PARTE DO ALFABETO!");
	}
}

