#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	float pi=4, m=3;
	int elemento, c;
	printf("Digite quantos elementos você quer para calcular o PI: ");
	scanf("%d", &elemento);
	for(c=2; c<=elemento; c++){
		if(c%2==0)
			pi=pi-4/m;
		else
			pi=pi+4/m;
	m=m+2;
	}
	printf("\n\nPI= %.16f", pi);
}
