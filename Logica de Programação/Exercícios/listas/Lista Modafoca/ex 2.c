#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	int n, maior;
	do{
		printf("Digite um n�mero: ");
		fflush(stdin);
		scanf("%d", &n);
		if(n > maior)
			maior = n;
	}while(n != 0);
	system("cls");
	printf("O maior n�mero que voc� digitou foi: %d", maior);
}
