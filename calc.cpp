/*
 Calculadora AEDS1- v1.0 - 07 / 12 / 2022
 Author: João Luiz Araujo
*/

// libs
//#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

//procedures

void soma(int num1, int num2) {
	int soma = 0;
	soma = num1 + num2;
	printf("\nA soma dos numeros digitados e: %d\n", soma);
}

void subtracao(int num1, int num2) {
	int subtracao;
	subtracao = num1 - num2;
	printf("\nA subtracao dos numeros digitados e: %d\n", subtracao);
}

void multiplicacao(int num1, int num2) {
	int multiplicacao;
	multiplicacao = num1 * num2;
	printf("\nA multiplicacao dos numeros digitados e: %d\n", multiplicacao);
}

void divisao(double num1, double num2) {
	double divisao;
	divisao = num1 / num2;
	printf("\nA divisao dos numeros digitados e: %0.2lf\n", divisao);
}

void raiz(double x) {
	double raiz;
	raiz = sqrt(x);
	printf("\nA raiz do numero digitado e: %0.2lf\n", raiz);
}

void expoen(int num1, int num2) {
	int expoen;
	expoen = pow(num1, num2);
	printf("\nO expoente do numero digitado e: %d\n", expoen);
}

void seno(double x) {
	double seno;
	seno = sin(x);
	printf("\nO Seno do numero digitado e: %0.2lf\n", seno);
}

void cosseno(double x) {
	double cosseno;
	cosseno = cos(x);
	printf("\nO Cosseno do numero digitado e: %0.2lf\n", cosseno);
}

void hipotenusa(double x, double y) {
	double hipotenusa;
	hipotenusa = hypot(x, y);
	printf("\nA Hipotenusa do X e Y digitado e: %0.2lf\n", hipotenusa);
}

void tangente(double x) {
	double tangente;
	tangente = tan(x);
	printf("\nA Tangente de X e: %0.2lf\n", tangente);
}

void logaritmo(double x) {
	double logaritmo;
	logaritmo = log10(x);
	printf("\nO Logaritmo do numero digitado e: %0.2lf\n", logaritmo);
}

void areaRetangulo(double x, double y) {
	double areaRetangulo;
	areaRetangulo = x * y;
	printf("\nA Area do Retangulo do numero digitado e: %0.2lf\n", areaRetangulo);
}

void areaCircu(double x) {
	double areaCircu;
	float pi = 3.14159;
	areaCircu = pi * x * x;
	printf("\nA Area do Circulo do numero digitado e: %0.2lf\n", areaCircu);
}

void fatorial(double x) {
	double fatorial;
    for(fatorial= 1; x > 1; x--){
        fatorial = fatorial * x;
    }
    printf("\nA Fatorial do numero digitado e: %0.2lf\n", fatorial);
}

void menu() {
	printf("\n------CALCULADORA------\n\nDigite a opcao de calculo desejada:\n[1]Soma\n[2]Subtracao\n[3]Multiplicacao\n[4]Divisao\n[5]Raiz Quadrada\n[6]Potencia\n[7]Seno\n[8]Cosseno\n[9]Hipotenusa de um triangulo retangulo\n[10]Tangente\n[11]Logaritimo\n[12]Area de um triangulo\n[13]Area de uma circunferencia\n[14]Fatorial\n\n[0]Finalizar programa\n");
}

int main(int argc, char** argv) {
	
	int num1 = 0, num2 = 0, opcao = -1;
	double x, y;
	
	do {
		do{
			menu();
			scanf("%d", &opcao);
		} while(opcao < 0 || opcao > 14);

		switch (opcao)
		{
			case 1:
				printf("Digite dois numeros inteiros para somar: ");
				scanf ("%d %d", &num1, &num2);
				soma(num1, num2);
				break;
			case 2:
				printf("Digite dois numeros inteiros para subtrair: ");
				scanf("%d %d", &num1, &num2);
				subtracao(num1, num2);
				break;
			case 3:
				printf("Digite dois numeros inteiros para multiplicar: ");
				scanf("%d %d", &num1, &num2);
				multiplicacao(num1, num2);				
				break;
			case 4:
				printf("Digite dois numeros inteiros para dividir: ");
				scanf("%d %d", &num1, &num2);
				divisao(num1, num2);				
				break;
			case 5:
				printf("Digite um numero para a Raiz Quadrada: ");
				scanf("%lf", &x);
				raiz(x);				
				break;
			case 6:
				printf("Digite um numero e seu expoente: ");
				scanf("%d %d", &num1, &num2);
				expoen(num1, num2);				
				break;
			case 7:
				printf("Digite um numero para achar o Seno: ");
				scanf("%lf", &x);
				seno(x);				
				break;
			case 8:
				printf("Digite um numero para achar o Cosseno: ");
				scanf("%lf", &x);
				cosseno(x);
				break;
			case 9:
				printf("Digite X e Y para achar a Hipotenusa: ");
				scanf("%lf %lf", &x, &y);
				hipotenusa(x, y);				
				break;
			case 10:
				printf("Digite um numero para achar a Tangente:");
				scanf("%lf", &x);
				tangente(x);				
				break;
			case 11:
				printf("Digite um numero para achar o Logaritmo: ");
				scanf("%lf", &x);
				logaritmo(x);				
				break;
			case 12:
				printf("Digite X e Y para achar a Area do Retangulo: ");
				scanf("%lf %lf", &x, &y);
				areaRetangulo(x, y);				
				break;
			case 13:
				printf("Digite X para achar a Area da Circunferencia: ");
				scanf("%x", &x);
				areaCircu(x);				
				break;
			case 14:
				printf("Digite um numero para achar seu Fatorial: ");
				scanf("%lf", &x);
				fatorial(x);				
				break;
			default:
				printf("**Fim**");
				break;
		}
		
	} while (opcao != 0);

	return 0;
}
