#include <stdio.h>
void main() {
	char res;
	do {
		printf("Boa noite\n\nDeseja continuar (s/n)?\n");
		scanf("%c", &res);
		fflush(stdin);
	}while(res == 'S' || res == 's');
}
