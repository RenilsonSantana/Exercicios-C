#include <stdio.h>
void main() {
	char res;
	res='S';
	while(res == 'S' || res == 's') {
		printf("Boa noite\n\nDeseja continuar (s/n)?\n");
		scanf("%c", &res);
		fflush(stdin);
	}
}
