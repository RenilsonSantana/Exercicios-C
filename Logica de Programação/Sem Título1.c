#include <stdio.h>
void main() {
	char n1, n2, n3, n4, n5, n6, n7, n8, s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
	printf("Nome: ");
	scanf("%c%c%c%c%c%c%c%c", &n1, &n2, &n3, &n4, &n5, &n6, &n7, &n8);
	fflush(stdin);
	printf("Senha: ");
	scanf("%c%c%c%c%c%c%c%c%c%c", &s1, &s2, &s3, &s4, &s5, &s6, &s7, &s8, &s9, &s10);
	fflush(stdin);
	if(n1 == 'R' || n1 == 'r' && n2 == 'E' || n2 == 'e' && n3 == 'N' || n3 == 'n' && n4 == 'I' || n4 == 'i' && n5 == 'L' || n5 == 'l' && n6 == 'S' || n5 == 's' && n6 == 'O' || n7 == 'o' && n8 == 'N' || n8 == 'n' && s1 == '1' && s2 == '2' && s3 == '3' && s4 == '6' && s5 == '5' && s6 == '4' && s7 == '7' && s8 == 'b' && s9 == 'm' && s10 == 'n'){
		printf("Bosta");
	}
}
