#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define TOTALCLIENTE 3

//Subrotinas
void Menu();
void EscolhaMenu(int opcao);
int CadastrarCliente(int qtdClientes);
void ListarClientes();
void ExcluirCliente();

//Structs
struct Tipo_Endereco
{
    char Rua[50];
    int Numero;
    char Bairro[50];
    char Cidade[50];
    char Estado[3];
};

struct Tipo_Cliente
{
    int Codigo;
    char Nome[50];
    struct Tipo_Endereco Endereco;
    char Email[50];
};

struct Tipo_Cliente cliente[2];

int main()
{

    Menu();
    
    system("pause");
}

//Menu de Clientes.
void Menu()
{

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
void EscolhaMenu(int opcao)
{

    int qtdClientes = 0;

    switch(opcao){

        case 1:
            qtdClientes = CadastrarCliente(qtdClientes);            
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
int CadastrarCliente(int qtdClientes)
{

    for(int i = 0; i < 2; i++)
    {
        system("cls");
        printf("======= CADASTRAR CLIENTE =======");
        printf("\n \t");
        fflush(stdin);
        printf("Informe o Codigo: ");
        scanf("%d", &cliente[i].Codigo);
        printf("\n \t");
        fflush(stdin);
        printf("Informe o Nome: ");
        gets(cliente[i].Nome);
        printf("\n \t");
        fflush(stdin);
        printf("Informe a Rua: ");
        gets(cliente[i].Endereco.Rua);
        printf("\n \t");
        fflush(stdin);
        printf("Informe o Numero: ");
        scanf("%d", &cliente[i].Endereco.Numero);
        printf("\n \t");
        fflush(stdin);
        printf("Informe a Bairro: ");
        gets(cliente[i].Endereco.Bairro);
        printf("\n \t");
        fflush(stdin);
        printf("Informe a Cidade: ");
        gets(cliente[i].Endereco.Cidade);
        printf("\n \t");
        fflush(stdin);
        printf("Informe a Estado (sigla): ");
        gets(cliente[i].Endereco.Estado);
        printf("\n \t");
        fflush(stdin);
        printf("Informe o Email: ");
        gets(cliente[i].Email);
        printf("\n \t");
        fflush(stdin);   

        qtdClientes += 1;

    }

    return qtdClientes;
    
}

//Função responsável por Listar os Clientes.
void ListarClientes()
{

    system("cls");
    printf("======= LISTAR CLIENTES =======");

    for(int i = 0; i < 2; i++){

        printf("\n \t");  
        printf("Codigo: %d", cliente[i].Codigo);
        printf("\n \t"); 
        printf("Nome: %s", cliente[i].Nome);
        printf("\n \t");
        printf("Rua: %s", cliente[i].Endereco.Rua);
        printf("\n \t");
        printf("Numero: %d", cliente[i].Endereco.Numero);  
        printf("\n \t");   
        printf("Bairro: %s", cliente[i].Endereco.Bairro);
        printf("\n \t");
        printf("Informe a Cidade: %s", cliente[i].Endereco.Cidade);
        printf("\n \t");
        printf("Estado (sigla): %s", cliente[i].Endereco.Estado);
        printf("\n \t");
        printf("Informe o Email: %s", cliente[i].Email);       
        printf("\n\n");

    }

    getch();

}

//Função responsável por Excluir o Cliente.
void ExcluirCliente()
{

    int codigo;

    system("cls");
    printf("======= EXCLUIR CLIENTE =======");
    printf("\n \t");    
    printf("Informe o Codigo: ");
    scanf("%d", &codigo);

    do
    {

         

    }while(cliente != 0);
    
    getch();

}
