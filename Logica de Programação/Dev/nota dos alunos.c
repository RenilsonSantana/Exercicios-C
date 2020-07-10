#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "portuguese");
	int aluno, nota[11];
	for(aluno=1; aluno <= 10; aluno++){
		printf("digite a nota do aluno Nº%d aluno: ", aluno);
		scanf("%d", &nota[aluno]);
	}
	system("cls");
	for(aluno=1; aluno <= 10; aluno++){
		printf("A nota do aluno Nº%d foi: %d\n", aluno, nota[aluno]);
	}
}
