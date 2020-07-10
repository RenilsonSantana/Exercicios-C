#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	char turma;
	int grup;
	printf("Escolha Turma A ou Turma B\n\nTurma: ");
	scanf("%c", &turma);
	switch(turma){
		case 'A':
		case 'a':
			printf("Escolha o número de um grupo (1 a 5): ");
			scanf("%d", &grup);
			system("cls");
			switch(grup){
				case 1:
					printf("-----GRUPO 1-----\n\nCaroline Silva Mendes\nJamili da Silva Lima\nEtiele Daiane dos Santos Simões");
					break;
				case 2:
					printf("-----GRUPO 2-----\n\nFernando Henrique Carvajal de Almeida\nGabriel Luciano Pereira da Silva Costa\nGusthavo Henrique Roecker Elias");
					break;
				case 3:
					printf("-----GRUPO 3-----\n\nEduardo Pacheco de Jesus\nDavid Santos de Jesus\nDaniel de Souza Ferrira");
					break;
				case 4:
					printf("-----GRUPO 4-----\n\nEdson Silles\nAdeilson Pereira de Carvalho\nDouglas Gonçalves de Oliveira");
					break;
				case 5:
					printf("-----GRUPO 5-----\n\nAssis Venancio Vasconcelos\nArlen Santana Barbosa\nAndre da Silva Ribeiro");
					break;
				default:
					printf("GRUPO INVALIDO!");
			}
			break;
		case 'B':
		case 'b':
			printf("Escolha o número de um grupo (1 a 7): ");
			scanf("%d", &grup);
			system("cls");
			switch(grup){
				case 1:
					printf("-----GRUPO 1-----\n\nMatheus Ribeiro Sampaio Lima\nMikael Atsumi Germano Ikenoue\nNicolas Aguiar de Souza");
					break;
				case 2:
					printf("-----GRUPO 2-----\n\nMichele dos Santos Silva\nZelia Eduarda Silva\nThaigo Cleidson de Lima do Nascimento");
					break;
				case 3:
					printf("-----GRUPO 3-----\n\nRenilson Santana Santos\nMayara Catoline da Silva\nWallace Vitor Pereira Duarte");
					break;
				case 4:
					printf("-----GRUPO 4-----\n\nMarcos Santos Lopes\nJonathan Francisco da Silva Gomes\nKayque Brito de Almeida");
					break;
				case 5:
					printf("-----GRUPO 5-----\n\nJoão Pedro Correia Alves\nMagda Oliveira Santos");
					break;
				case 6:
					printf("-----GRUPO 6-----\n\nJoão Vitor Rainha Uchoa Saraiva\nRafael Souza de Araujo\nMarcos Vinicius de Abreu da Conceição");
					break;
				case 7:
					printf("-----GRUPO 7-----\n\nJose Adriano da Silva Ferreira\nRobson Rodrigo Barbosa Ferreira");
					break;
				default:
					printf("GRUPO INVALIDO!");
			}
			break;
		default:
			system("cls");
			printf("ESTÁ TURMA NÃO EXISTE!");
	}
}
