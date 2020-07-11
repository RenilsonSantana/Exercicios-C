#include <stdio.h>
void main() {
	char R, E, N, I, L, S, O;
	int Nascimento, Ano, Idade;
	R='R';
	E='E';
	N='N';
	I='I';
	L='L';
	S='S';
	O='O';
	Nascimento=1999;
	Ano=2017;
	Idade=Ano-Nascimento;
	printf("%c%c%c%c%c%c%c%c, %d anos",R,E,N,I,L,S,O,N,Idade);
}
