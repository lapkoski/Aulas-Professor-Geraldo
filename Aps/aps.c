#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void Menu();

int main(){

    Menu();
    
    system("pause");
}

//Menu de Clientes.
void Menu(){

    int opcao;

    do{        

        system("cls");
        printf("======= MENU CLIENTE ======= \n\n");
        printf("\t");
        printf("1) Cadastrar \n");
        printf("\t");
        printf("2) Listar \n");
        printf("\t");
        printf("3) Excluir \n");
        printf("\t");
        printf("Opcao: ");
        scanf("%d", &opcao);

    }while(opcao != 0);

}