/*
	Exercicio 2
	Autor: Raphael Lapkoski Mazanek
	e-mail: raphael.lapkoski@gmail.com
*/

#include <stdio.h>
#include <stdlib.h>

/*
	Abaixo estava declarada um subrotina nomeada como soma()
	e sem parâmetros declarados, para que nosso sistema esteja
	correto deve-se conter uma subrotina multiplica que receba
	dois parâmetros.
*/

int multiplica(int n1, int n2);

int main(int argc, char *argv[]) {
	
	int n1, n2;
	
	printf("\nEntre com dois numeros");
	scanf("%d %d", &n1, &n2);
	/*
		Na linha abaixo estava declarada a chamada da subrotina sem os
		parâmetros passados, além disso o texto tem %d e apenas a 
		subrotina passada, com isso não imprime corretamente, para isso
		passaremos o n1, n2 e o multiplica(n1, n2)
	*/
	printf("O numero %d multiplicado por %d = %d\n", n1, n2, multiplica(n1, n2));
		
	return 0;
}

/*
	Esta subrotina estava declarda com nome correto,
	porém não recebia parâmetros, logo não tinha como
	executar o calculo.
*/
int multiplica(int n1, int n2){
	
	int mult;
	
	mult = n1 * n2;
	
	return mult;
}
