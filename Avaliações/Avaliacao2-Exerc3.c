/*
	Exercicio 3
	Autor: Raphael Lapkoski Mazanek
	e-mail: raphael.lapkoski@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

float calcValor(float valor1, float valor2, float valor3);
void imprValor(float valor1, float valor2, float valor3);

int main(int argc, char *argv[]) {
	
	float valor1, valor2, valor3;
	
	printf("===== Dados Calculo ===== \n");	
	printf("Informe o valor1: ");
	scanf("%f", &valor1);
	if(valor1 != 0){
	
		printf("\nInforme o valor2: ");
		scanf("%f", &valor2);
		printf("\nInforme o valor3: ");
		scanf("%f", &valor3);
	
		imprValor(valor1, valor2, valor3);
		
	}
	else{
		printf("Nao e possivel divisao por 0");
	}
			
	return 0;
}

void imprValor(float valor1, float valor2, float valor3){
	
	printf("Soma: %.2f", calcValor(valor1, valor2, valor3));
	
}

float calcValor(float valor1, float valor2, float valor3){
	
	float soma;
	
	soma = ((valor1 + valor2) / valor1) + valor3;
	
	return soma;
	
}


