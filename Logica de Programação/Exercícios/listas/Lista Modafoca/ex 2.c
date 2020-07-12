#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	int n, maior;
	do{
		printf("Digite um número: ");
		fflush(stdin);
		scanf("%d", &n);
		if(n > maior)
			maior = n;
	}while(n != 0);
	system("cls");
	printf("O maior número que você digitou foi: %d", maior);
}
