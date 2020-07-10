#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char s1, s2, s3, s4, s5, s6, s7;
	while(s1 != '@' || s2 != 'g' || s3 != 'u' || s4 != 'a' || s5 != '1' || s6 != '2' || s7 != '3'){
		printf("Digite a senha (7digitos): ");
		scanf("%c%c%c%c%c%c%c", &s1, &s2, &s3, &s4, &s5, &s6, &s7);
		fflush(stdin);
		if(s1 == '@' && s2 == 'g' && s3 == 'u' && s4 == 'a' && s5 == '1' && s6 == '2' && s7 == '3'){
			system("cls");
			printf("Os extraterrestres invadiram o planeta, e estão fazendo experimentos com pessoas!");
		}
		else{
			system("cls");
			printf("Senha incorreta!\n\n");
		}
}
}
