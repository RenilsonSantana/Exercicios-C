#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
	do{
		printf("Digite a senha (10digitos): ");
		scanf("%c%c%c%c%c%c%c%c%c%c", &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8, &s9, &s10);
		fflush(stdin);
		if(s1 == '1' && s2 == '2' && s3 == '3' && s4 == '6' && s5 == '5' && s6 == '4' && s7 == '7' && s8 == 'b' && s9 == 'm' && s10 == 'n'){
			system("cls");
			printf("O KAYQUE TEM UMA NAMORADA\n\n      POREM...\n\n       ELA É IMAGINARIA...");
		}
		else{
			system("cls");
			printf("Senha incorreta!\n\n");
		}
	}while(s1 != '1' || s2 != '2' || s3 != '3' || s4 != '6' || s5 != '5' || s6 != '4' || s7 != '7' || s8 != 'b' || s9 != 'm' || s10 != 'n');
}
