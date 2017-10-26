#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

struct ficha_aluno{
    int codigo;
    char nome[50];
    long int telefone;
    char email[100];
};

int main(){

    int opcao;
    struct ficha_aluno aluno;
    
    do{
        system("cls");
        printf("-- MENU --\n\n");
        printf("1 - Ficha Aluno\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch(opcao){
            
            case 1:
                printf("Informe o codigo: ");
                scanf("%d", &aluno.codigo);
                fflush(stdin);
        
                printf("Informe o nome: ");
                gets(aluno.nome);
                fflush(stdin);
        
                printf("Informe o telefone: ");
                scanf("%d", &aluno.telefone);
                fflush(stdin);
        
                printf("Informe o e-mail: ");
                gets(aluno.email);
        
                printf("\n%d", aluno.codigo);
                printf("\n%s", aluno.nome);
                printf("\n%d", aluno.telefone);
                printf("\n%s\n\n", aluno.email); 

                printf("Pressione qualquer tecla para continuar...");
                getch();
            break;

            case 0:
                printf("Saindo... \n\n");                
            break;

            default:
                printf("Opcao invalida");
                printf("\n\nPressione qualquer tecla para continuar...");
                getch();
            break;

        }

    }while(opcao > 0);
    
    system("pause");
}