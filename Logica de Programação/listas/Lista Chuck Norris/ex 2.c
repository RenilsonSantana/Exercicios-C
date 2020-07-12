#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	int valor[10], cont1, cont2, aux;
	for(cont1=0; cont1 <= 9; cont1++){
		printf("Digite o %dº número: ", cont1+1);
		fflush(stdin);
		scanf("%d", &valor[cont1]);
	}
	for(cont1=0; cont1<=8; cont1++){
		for(cont2 = cont1+1; cont2 <= 9; cont2++){
			if(valor[cont1]>valor[cont2]){
				aux = valor[cont1];
				valor[cont1] = valor[cont2];
				valor[cont2] = aux;
			}
		}
	}
	printf("\n\n\n");
	for(cont1=0; cont1<=9; cont1++){
		printf("Ordem crescente: %d\n", valor[cont1]);
	}
}
