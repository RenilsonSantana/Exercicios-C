#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int res, n1, n2;
	printf("E-S-C-O-L-H-A---U-M-A---O-P-E-R-A-�-�-O---M-A-T-E-M-�-T-I-C-A\n\n1)Soma\n2)subtra��o\n3)multiplica��o\n4)divis�o\n5)quadrado\n6)cubo\n\n");
	scanf("%d", &res);
	system("cls");
	switch(res){
		case 1:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			system("cls");
			printf("%d+%d=%d", n1, n2, n1+n2);
			break;
		case 2:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			system("cls");
			printf("%d-%d=%d", n1, n2, n1-n2);
			break;
		case 3:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			system("cls");
			printf("%dx%d=%d", n1, n2, n1*n2);
			break;
		case 4:
			printf("Digite o primeiro n�mero: ");
			scanf("%d", &n1);
			printf("Digite o segundo n�mero: ");
			scanf("%d", &n2);
			system("cls");
			printf("%d�%d=%d", n1, n2, n1/n2);
			break;
		case 5:
			printf("Digite um n�mero: ");
			scanf("%d", &n1);
			system("cls");
			printf("%d�=%d", n1, n1*n1);
			break;
		case 6:
			printf("Digite um n�mero: ");
			scanf("%d", &n1);
			system("cls");
			printf("%d�=%d", n1, n1*n1*n1);
			break;
		default:
			printf("O-P-�-�-O---I-N-V-A-L-I-D-A!");
	}
	
}
