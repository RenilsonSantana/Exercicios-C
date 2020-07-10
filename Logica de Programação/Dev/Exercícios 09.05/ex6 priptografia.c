#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char res;
	printf("Converta uma letra (A a Z): ");
	scanf("%c", &res);
	system("cls");
	switch(res) {
		case 'A':
		case 'a':
			printf("A = xixi");
			break;
		case 'B':
		case 'b':
			printf("B = côco");
			break;
		case 'C':
		case 'c':
			printf("C = peido");
			break;
		case 'D':
		case 'd':
			printf("D = pum");
			break;
		case 'E':
		case 'e':
			printf("E = flatulência");
			break;
		case 'F':
		case 'f':
			printf("F = unira");
			break;
		case 'G':
		case 'g':
			printf("G = torax");
			break;
		case 'H':
		case 'h':
			printf("H = crânio");
			break;
		case 'I':
		case 'i':
			printf("I = orelha");
			break;
		case 'J':
		case 'j':
			printf("J = cera");
			break;
		case 'K':
		case 'k':
			printf("K = ouvido");
		case 'L':
		case 'l':
			printf("L = tênis");
			break;
		case 'M':
		case 'm':
			printf("M = unha");
			break;
		case 'N':
		case 'n':
			printf("N = pé");
			break;
		case 'O':
		case 'o':
			printf("O = pomba");
			break;
		case 'P':
		case 'p':
			printf("P = chão");
			break;
		case 'Q':
		case 'q':
			printf("Q = pneu");
			break;
		case 'R':
		case 'r':
			printf("R = bolsa");
			break;
		case 'S':
		case 's':
			printf("S = cabelo");
			break;
		case 'T':
		case 't':
			printf("T = luva");
			break;
		case 'U':
		case 'u':
			printf("U = teto");
			break;
		case 'V':
		case 'v':
			printf("V = telhado");
			break;
		case 'W':
		case 'w':
			printf("W = privada");
			break;
		case 'X':
		case 'x':
			printf("X = pia");
			break;
		case 'Y':
		case 'y':
			printf("Y = torneira");
			break;
		case 'Z':
		case 'z':
			printf("Z = droga");
			break;
		default:
			printf("V-O-C-Ê---N-Ã-O---D-I-G-I-T-O-U---N-E-N-H-U-M-A---L-E-T-R-A---D-E---(A)-a-(Z)!");
	}
}
