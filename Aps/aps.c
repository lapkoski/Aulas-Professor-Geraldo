#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

void Menu();
void EscolhaMenu(int opcao);

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
        printf("0) Sair \n");
        printf("\t");
        printf("Opcao: ");
        scanf("%d", &opcao);

        EscolhaMenu(opcao);

    }while(opcao != 0);

}

//Recebe opção escolhida e direciona.
void EscolhaMenu(int opcao){

    switch(opcao){

        case 1:
            printf("======= CADASTRAR CLIENTE =======");
            getch();
        break;

        case 2:
            printf("======= LISTAR CLIENTES =======");
            getch();
        break;

        case 3:
            printf("======= EXCLUIR CLIENTE =======");
            getch();
        break;

        case 0:
            printf("\t");
            printf("Saindo... \n\n");
        break;

        default:
            printf("\t");
            printf("Opcao invalida");
            getch();
        break;

    }

}