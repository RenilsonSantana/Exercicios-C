#include <stdio.h>
#include <locale.h>
#include <string.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char n[10], s[11];
	do{
		printf("Nome: ");
		scanf("%s", &n);
		fflush(stdin);
		printf("Senha: ");
		scanf("%s", &s);
		system("cls");
		if(strcasecmp(n, "Renilson")==0 && strcmp(s,"1236547bmn")==0)
			printf("SUA VIDA � UMA BOSTA! SEU IN�TIL");
		else
			if(strcasecmp(n, "Mayara")==0 && strcmp(s,"023016carai")==0)
				printf("O NICOLAS TE AMA!");
			else
				if(strcasecmp(n, "Edgar")==0 && strcmp(s, "logica")==0)
					printf("VOC� � UM DOS MEUS PROFESSORES PREFERIDOS");
				else
					if(strcasecmp(n, "Carol")==0 && strcmp(s, "12345carol")==0)
						printf("PROXIMO M�DULO VAMOS SER DA MESMA SALA, AGUENTA FIRME ATE L� <3");
					else
						printf("Nome ou Senha invalido!\n\n");
			
	}while((strcasecmp(n, "Renilson")!=0 || strcmp(s, "1236547bmn")!=0) && (strcasecmp(n,"Mayara")!=0 || strcmp(s,"023016carai")!=0) && (strcasecmp(n, "Edgar")!=0 || strcmp(s, "logica")!=0) && (strcasecmp(n, "Carol")!=0 || strcmp(s, "12345carol")!=0));
}
