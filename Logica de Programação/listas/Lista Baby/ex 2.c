#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	int res, c;
	printf("Digite quantas vezes você quer 'Boa noite': ");
	scanf("%d", &res);
	for(c = 0; c < res; c++)
		printf("Boa noite!\n");
}
