#include <stdio.h>
#include <locale.h>
void main(){
	setlocale(LC_ALL, "Portuguese");
	float tot, pag, troco;
	int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
	printf("Digite o total da sua compra: R$");
	scanf("%f", &tot);
	printf("Digite o valor que você pagou: R$");
	scanf("%f", &pag);
	troco=pag-tot;
	if(troco < 0)
		printf("\nVALOR INSUFICIENTE!!!");
	else{
		printf("\ntroco: R$%.2f\n\n", troco);
		n100 = troco/100;
		troco = troco-n100*100;
		n50 = troco/50;
		troco = troco-n50*50;
		n20 = troco/20;
		troco = troco-n20*20;
		n10 = troco/10;
		troco = troco-n10*10;
		n5 = troco/5;
		troco = troco-n5*5;
		n2 = troco/2;
		troco = troco-n2*2;
		n1 = troco;
		printf("Notas de 100: %d\nNotas de 50: %d\nNotas de 20: %d\nNotas de 10: %d\nNotas de 5: %d\nNotas de 2: %d\nNotas de 1: %d", n100, n50, n20, n10, n5, n2, n1);
	}
}
