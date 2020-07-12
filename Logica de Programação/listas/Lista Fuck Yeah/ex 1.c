#include <stdio.h>
void main(){
	int l, c; //não são bons nomes para variaveis
	for(l=1; l<= 10; l++){
		printf("\nTabuada do %d\n", l);
		for(c=1; c<=10; c++){
			printf("%dx%d= %d\n", l, c, l*c);
		}
	}
}
