#include <stdio.h>
#include <locale.h>
void main() {
	setlocale(LC_ALL, "Portuguese");
	int rm;
	printf("Informe o RM: ");
	scanf("%d", &rm);
	system("cls");
	switch(rm) {
		case 17078:
			printf("Adeilson Pereira de Carvalho (Turma A)");
			break;
		case 17139:
			printf("Alvaro Santos Costa (Turma A)\n(por algum motivo não vem mais)");
			break;
		case 17217:
			printf("Andre da Silva Ribeiro (Turma A)");
			break;
		case 17206:
			printf("Arlen Santana Barbosa (Turma A)");
			break;
		case 17150:
			printf("Assis Venancio Vasconcelos (Turma A)");
			break;
		case 17106:
			printf("Caroline Silva Mendes (Turma A)");
			break;
		case 17068:
			printf("Daniel de Souza Ferreira (Turma A)");
			break;
		case 17102:
			printf("David Santos de Jesus (Turma A)");
			break;
		case 17144:
			printf("Denis de Faria Sampaio (Turma A)");
			break;
		case 17184:
			printf("Douglas Gonçalves de Oliveira (Turma A)");
			break;
		case 17011:
			printf("Edson Silles (Turma A)");
			break;
		case 17118:
			printf("Eduardo Pacheco de Jesus (Turma A)\n(não conheço)");
			break;
		case 17169:
			printf("Eriosvaldo Silva do Nascimento (Turma A)\n(não conheço)");
			break;
		case 17044:
			printf("Etiele Daiane dos Santos Simões (Turma A)");
			break;
		case 16371:
			printf("Fagner Oliveira da Silva (Turma A)\n(não conheço)");
			break;
		case 17114:
			printf("Felipe Silva Nascimento (Turma A)\n(não conheço)");
			break;
		case 17086:
			printf("Fernando Henrique Carvajal de Almeida (Turma A)");
			break;
		case 17128:
			printf("Gabriel Luciano Pereira da Silva Costa (Turma A)");
			break;
		case 17035:
			printf("Gusthavo Henrique Roecker Elias (Turma A)");
			break;
		case 16369:
			printf("Jaco Araujo da Silva (Turma A)\n(não conheço)");
			break;
		case 17130:
			printf("Jamili da Silva Lima (Turma A)");
			break;
		case 17208:
			printf("João Pedro Correia Alves (Turma B)");
			break;
		case 16268:
			printf("João Vitor Rainha Uchoa Saraiva (Turma B)");
			break;
		case 17070:
			printf("Jonathan Francisco da Silva Gomes (Turma B)");
			break;
		case 17218:
			printf("Jose Adriano da Silva Ferreira (Turma B)");
			break;
		case 17178:
			printf("Kayque Brito de Almeida (Turma B)");
			break;
		case 16311:
			printf("Magda Oliveira Santos (Turma B)\n(aparece as vezes)");
			break;
		case 17122:
			printf("Marcio Heleno Mandu (Turma B)\n(desistente)");
			break;
		case 17104:
			printf("Marcos Santos Lopes (Turma B)");
			break;
		case 17223:
			printf("Marcos Vinicius de Abreu da Conceição (Turma B)");
			break;
		case 17076:
			printf("Matheus Ribeiro Sampaio Lima (Turma B)");
			break;
		case 17147:
			printf("Mayara Caroline da Silva (Turma B)");
			break;
		case 17031:
			printf("Michele dos Santos Silva (Turma B)");
			break;
		case 17229:
			printf("Mikael Atsumi Germano Ikenoue (Turma B)");
			break;
		case 17188:
			printf("Nicolas Aguiar de Souza (Turma B)");
			break;
		case 17207:
			printf("Patricia Leandro Kuster (Turma B)\n(desistente)");
			break;
		case 17059:
			printf("Pedro Henrique Neves dos Santos (Turma B)\n(desistente)");
			break;
		case 17028:
			printf("Rafael Souza de Araujo (Turma B)");
			break;
		case 17159:
			printf("Robson Rodrigo Barbosa Pereira (Turma B)");
			break;
		case 17185:
			printf("Thiago Gleidson de Lima do Nascimento (Turma B)");
			break;
		case 17080:
			printf("Vinicius Cardoso da Silva (Turma B)\n(dedistente)");
			break;
		case 17113:
			printf("Wallace Vitor Pereira Duarte (Turma B)");
			break;
		case 17161:
			printf("Zelia Eduarda Silva (Turma B)");
			break;
		case 17254:
			printf("Renilson Santana Santos (Turma B)");
			break;
		default:
			printf("RM NÃO CADASTRADO!");
	}
}
