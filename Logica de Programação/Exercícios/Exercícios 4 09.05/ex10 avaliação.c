#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char res;
	int nota;
	printf("1)Qual a cor da brusa do Naruto?\nA)Preta\nB)Amarela\nC)Vermelha\nD)Laranja\nE)Branca\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 0;
			break;
		case 'B':
		case 'b':
			nota = nota + 3;
			break;
		case 'C':
		case 'c':
			nota = nota + 2;
			break;
		case 'D':
		case 'd':
			nota = nota + 5;
			break;
		case 'E':
		case 'e':
			nota = nota + 1;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("2)Qual a cor do Sharingan?\nA)Azul\nB)Branco\nC)Vermelho\nD)Laranja\nEVerde\n)");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 2;
			break;
		case 'B':
		case 'b':
			nota = nota + 1;
			break;
		case 'C':
		case 'c':
			nota = nota + 5;
			break;
		case 'D':
		case 'd':
			nota = nota + 3;
			break;
		case 'E':
		case 'e':
			nota = nota + 0;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("3)Qual o simbolo que tem no manto da Akatsuki?\nA)lua\nB)Sol\nC)Estrela\nD)Caveira\nE)Nuvem\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 4;
			break;
		case 'B':
		case 'b':
			nota = nota + 2;
			break;
		case 'C':
		case 'c':
			nota = nota + 1;
			break;
		case 'D':
		case 'd':
			nota = nota + 0;
			break;
		case 'E':
		case 'e':
			nota = nota + 5;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("4)Qual o sonho do Naruto?\nA)Se tornar o Hokage mais respeitado\nB)Se tornar Hokage\nC)Ser o Rei dos Piratas\nD)Ser o Ninja mais forte\nE)Se tornar Presidente da vila dele\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 5;
			break;
		case 'B':
		case 'b':
			nota = nota + 4;
			break;
		case 'C':
		case 'c':
			nota = nota + 0;
			break;
		case 'D':
		case 'd':
			nota = nota + 2;
			break;
		case 'E':
		case 'e':
			nota = nota + 1;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("5)Quem foi o 4º Hokage?\nA)Hashirama\nB)Tobirama\nC)Hiruzen\nD)Minato\nE)Tsunade\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 0;
			break;
		case 'B':
		case 'b':
			nota = nota + 1;
			break;
		case 'C':
		case 'c':
			nota = nota + 3;
			break;
		case 'D':
		case 'd':
			nota = nota + 5;
			break;
		case 'E':
		case 'e':
			nota = nota + 2;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("6)Qual o sonho do Luffy?\nA)Se tornar o maior espadashin\nB)Ser o Rei dos Piratas\nC)Se tornar Hokage\nD)Encontrar Shanks\nE)Ser o pirata mais forte\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota = 3;
			break;
		case 'B':
		case 'b':
			nota = nota + 5;
			break;
		case 'C':
		case 'c':
			nota = nota + 0;
			break;
		case 'D':
		case 'd':
			nota = nota + 2;
			break;
		case 'E':
		case 'e':
			nota = nota + 1;
		default:
			printf("resposta invalida\n");
	}
	printf("7)Como é o nome do protagonista de Bleach?\nA)Naruto\nB)Ishida\nC)Ichigo\nD)Luffy\nE)Sasuke\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 2;
			break;
		case 'B':
		case 'b':
			nota = nota + 3;
			break;
		case 'C':
		case 'c':
			nota = nota + 5;
			break;
		case 'D':
		case 'd':
			nota = nota + 1;
			break;
		case 'E':
		case 'e':
			nota = nota + 0;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("8)Qual o nome do vilão principal de Bleach?\nA)Hollows\nB)Ulquiorra\nC)Aizen\nD)Madara\nE)Ginjo\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 2;
			break;
		case 'B':
		case 'b':
			nota = nota + 4;
			break;
		case 'C':
		case 'c':
			nota = nota + 5;
			break;
		case 'D':
		case 'd':
			nota = nota + 0;
			break;
		case 'E':
		case 'e':
			nota = nota + 3;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("9)Qual a cor do ceu?\nA)Azul\nB)Verde\nC)Alaranjado\nD)Preto\nE)Marrom\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 5;
			break;
		case 'B':
		case 'b':
			nota = nota + 1;
			break;
		case 'C':
		case 'c':
			nota = nota + 2;
			break;
		case 'D':
		case 'd':
			nota = nota + 3;
			break;
		case 'E':
		case 'e':
			nota = nota + 0;
			break;
		default:
			printf("resposta invalida\n");
	}
	printf("10)Qual o meu anime preferido?\nA)One Piece\nB)Bleach\nC)School Days\nD)Naruto\nE)Fairy Tail\n");
	scanf("%c", &res);
	fflush(stdin);
	switch(res) {
		case 'A':
		case 'a':
			nota = nota + 4;
			break;
		case 'B':
		case 'b':
			nota = nota + 3;
			break;
		case 'C':
		case 'c':
			nota = nota + 0;
			break;
		case 'D':
		case 'd':
			nota = nota + 5;
			break;
		case 'E':
		case 'e':
			nota = nota = 2;
			break;
		default:
			printf("resposta invalida\n");
	}
	system("cls");
	printf("Sua nota é %d/50!", nota);
}
