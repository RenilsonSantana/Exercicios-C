#include <stdio.h>
#include <locale.h>
void main(){
	char Letra;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite uma letra: ");
	scanf("%c", &Letra);
	if(Letra == 'A' || Letra == 'a' || Letra == 'E' || Letra == 'e' || Letra == 'I'|| Letra == 'i' || Letra == 'O' || Letra == 'o' || Letra == 'U' || Letra == 'u')
		printf("Você digitou uma vogal!");
	else
		if(Letra == 'B' || Letra == 'b' || Letra == 'C' || Letra == 'c' || Letra == 'D' || Letra == 'd' || Letra == 'F' || Letra == 'f' || Letra == 'G' || Letra == 'g' || Letra == 'H' || Letra == 'h' || Letra == 'J' || Letra == 'j' || Letra == 'K' || Letra == 'k' || Letra == 'L' || Letra == 'l' || Letra == 'M' || Letra == 'm' || Letra == 'N' || Letra == 'n' || Letra == 'P' || Letra == 'p' || Letra == 'Q' || Letra == 'q' || Letra == 'R' || Letra == 'r' || Letra == 'S' || Letra == 's' || Letra == 'T' || Letra == 't' || Letra == 'V' || Letra == 'v' || Letra == 'W' || Letra == 'w' || Letra == 'X' || Letra == 'x' || Letra == 'Y' || Letra == 'y' || Letra == 'Z' | Letra == 'z')
			printf("Você digitou uma consoante!");
		else
			printf("VOCÊ É BURRO? MANDEI DIGITAR UMA LETRA!");
}
