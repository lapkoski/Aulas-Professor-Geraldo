#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>

#define VALOR_MULTA 50.00

struct ficha_aluno{
    int codigo;
    char nome[50];
    long int telefone;
    char email[100];
};

struct ficha_imovel{
    int numero;
    float valor_imposto;
    int meses_atraso;
    float multa;
};

int main(){

    int opcao;
    struct ficha_aluno aluno;
    struct ficha_imovel imovel;

    do{
        system("cls");
        printf("-- MENU --\n\n");
        printf("1 - Ficha Aluno\n");
        printf("2 - Multa Imovel\n");
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
        
                printf("\nDADOS ALUNO\n");
                printf("Codigo: %d \n", aluno.codigo);
                printf("Nome: %s \n", aluno.nome);
                printf("Telefone: %d \n", aluno.telefone);
                printf("E-mail: %s \n\n", aluno.email); 

                printf("Pressione qualquer tecla para continuar...");
                getch();
            break;

            case 2:
                printf("Informe o numero do imovel: ");
                scanf("%d", &imovel.numero);
                fflush(stdin);

                printf("Informe o valor do IPTU: ");
                scanf("%f", &imovel.valor_imposto);
                fflush(stdin);


                printf("Informe os meses atrasados: ");
                scanf("%d", &imovel.meses_atraso);
                fflush(stdin);

                imovel.multa = ((imovel.meses_atraso * VALOR_MULTA) + imovel.valor_imposto);

                printf("\nDADOS IMOVEL\n");
                printf("Numero: %d \n", imovel.numero);
                printf("IPTU: %.2f \n", imovel.valor_imposto);
                printf("Meses: %d \n", imovel.meses_atraso);
                printf("Total de multa: %.2f \n\n", imovel.multa);
                printf("\n\nPressione qualquer tecla para continuar...");
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