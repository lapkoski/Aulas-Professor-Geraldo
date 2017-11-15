/*
	Exercicio 1
	Autor: Raphael Lapkoski Mazanek
	e-mail: raphael.lapkoski@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>>

//Structs
struct dados_funcionario
{
	int matricula;
	char nome[50];
	char cidade[50];
	float salario_base;	
};

int main(int argc, char *argv[]) {
	
	struct dados_funcionario funcionario;
	float salario_final;
	
	printf("===== Dados Funcionario ===== \n");
	printf("Informe a Matricula: ");
	scanf("%d", &funcionario.matricula);
	fflush(stdin);
	printf("Informe o nome: ");
	gets(funcionario.nome);
	fflush(stdin);
	printf("Informe a Cidade: ");
	gets(funcionario.cidade);
	fflush(stdin);	
	printf("Informe o salario: ");
	scanf("%f", &funcionario.salario_base);
	fflush(stdin);
	
	salario_final = funcionario.salario_base - (funcionario.salario_base * 0.45);
	
	printf(" \n===== Dados Finais ===== \n");
	printf("\nMatricula: %d", funcionario.matricula);
	printf("\nNome: %s", funcionario.nome);
	printf("\nCidade: %s", funcionario.cidade);
	printf("\nMatricula: %d", funcionario.matricula);
	printf("\nSalário Base: %.2f - Salario Final: %.2f", funcionario.salario_base, salario_final);
				
	return 0;
}
