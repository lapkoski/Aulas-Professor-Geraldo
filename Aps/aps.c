#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

//Subrotinas
void Menu();
void EscolhaMenu(int opcao);
void CadastrarCliente();
void ListarClientes();
void ExcluirCliente();

//Structs
struct Tipo_Endereco{
    char Rua[50];
    int Numero;
    char Bairro[50];
    char Cidade[50];
    char Estado[3];
};

struct Tipo_Cliente{
    int Codigo;
    char Nome[50];
    struct Tipo_Endereco Endereco;
    char Email[50];
};

struct Tipo_Cliente cliente;

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
            CadastrarCliente();
        break;

        case 2:
            ListarClientes();
        break;

        case 3:
            ExcluirCliente();
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

//Função responsável por efetuar o Cadastro de Clientes.
void CadastrarCliente(){

    system("cls");
    printf("======= CADASTRAR CLIENTE =======");
    printf("\n \t");
    fflush(stdin);
    printf("Informe o Codigo: ");
    scanf("%d", &cliente.Codigo);
    printf("\n \t");
    fflush(stdin);
    printf("Informe o Nome: ");
    gets(cliente.Nome);
    printf("\n \t");
    fflush(stdin);
    printf("Informe a Rua: ");
    gets(cliente.Endereco.Rua);
    printf("\n \t");
    fflush(stdin);
    printf("Informe o Numero: ");
    scanf("%d", &cliente.Endereco.Numero);
    printf("\n \t");
    fflush(stdin);
    printf("Informe a Bairro: ");
    gets(cliente.Endereco.Bairro);
    printf("\n \t");
    fflush(stdin);
    printf("Informe a Cidade: ");
    gets(cliente.Endereco.Cidade);
    printf("\n \t");
    fflush(stdin);
    printf("Informe a Estado (sigla): ");
    gets(cliente.Endereco.Estado);
    printf("\n \t");
    fflush(stdin);
    printf("Informe o Email: ");
    gets(cliente.Email);
    printf("\n \t");
    fflush(stdin);   
    
}

//Função responsável por Listar os Clientes.
void ListarClientes(){

    system("cls");
    printf("======= LISTAR CLIENTES =======");
    getch();

}

//Função responsável por Excluir o Cliente.
void ExcluirCliente(){

    system("cls");
    printf("======= EXCLUIR CLIENTE =======");
    getch();

}
