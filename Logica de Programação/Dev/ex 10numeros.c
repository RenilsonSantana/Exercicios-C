#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int n[10], c, pos=0, neg=0, par=0, imp=0;
	for(c=0; c<=9; c++){
		printf("Digite o %dº número: ", c+1);
		scanf("%d", &n[c]);
		if(n[c] >= 0)
			pos=pos+1;
		else
			neg=neg+1;
		if(n[c] % 2 == 0)
			par=par+1;
		else
			imp=imp+1;
	}
	printf("Você digitou %d números positivo, %d negativos, %d pares e %d impares", pos, neg, par, imp);
}
