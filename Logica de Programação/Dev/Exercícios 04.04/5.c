#include <stdio.h>
#include <locale.h>
void main(){
	char Res;
	int nota;
	setlocale(LC_ALL, "Portuguese");
	printf("1) Quantos eps tem o anime Naruto Classico?\n");
	printf("A) 100 \nB) 120 \nC) 200 \nD) 220 \nE) 300 \n");
	scanf("%c", &Res);
	if(Res == 'D' || Res == 'd')
		nota = nota + 1;
	printf("2) Quantos eps tem Naruto Shippuuden?\n");
	printf("A) 300 \nB) 400 \nC) 500 \nD) 600 \nE) 700\n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'C' || Res == 'c')
		nota = nota + 1;
	printf("3) Qual a capital da Espanha?\n");
	printf("A) Barcenola \nB) Madri \nC) São Paulo \nD) Espirito Santos \nE) Tóquio\n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'B' || Res == 'b')
		nota = nota + 1;
	printf("4) O rato roeu a roupa de quem?\n");
	printf("A) Padre \nB) Padeiro \nC) Engenheiro \nD) Rei \nE) Irineu \n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'D' || Res == 'd')
		nota = nota + 1;
	printf("5) o céu é que cor?\n");
	printf("A) Vermelho \nB) Amarelo\nC) Azul \nD) Rosa \nE) Laranja\n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'c' || Res == 'C')
		nota = nota + 1;
	printf("6) Em que ano o Google foi fundado?\n");
	printf("A) 1910 \nB) 1950 \nC) 1998 \nD) 2002 \nE) 2018 \n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'C' || Res == 'c')
		nota = nota + 1;
	printf("7)Em Naruto, quem derrota o Uchiha Madara na Quarta Guerra Ninja?\n");
	printf("A)Naruto\nB)Sasuke\nC)Sakura \nD)Hashirama \nE)Zetsu Negro\n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'E' || Res == 'e')
		nota = nota + 1;
	printf("8)Em Naruto, quem derrotou Sasori?\n");
	printf("A)Naruto \nB)Sasuke \nC)Kakashi \nD)Sakura e Chioba \nE)Minato\n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'D' || Res == 'd')
		nota = nota + 1;
	printf("9)Em Naruto quem é conhecido como o (Relampago Dourado de Konoha)?\n");
	printf("A)Naruto \nB)Kakashi \nC)Sasuke \nD)Minato \nE)Madara \n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'D' || Res == 'd')
		nota = nota + 1;
	printf("10)Quando os Sayajins envadem a Terra qual o poder de luta de Kakaroto?\n");
	printf("A)1000 \nB)3000 \nC)5000 \nD)8000 \nE)8000+ \n");
	fflush(stdin);
	scanf("%c", &Res);
	if(Res == 'E' || Res == 'e')
		nota = nota + 1;
	printf("Sua nota é %d", nota);
}
