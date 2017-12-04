#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>

#define TOTALCLIENTE 2

//Subrotinas
#pragma region Subrotinas
void Menu(int qtdClientes);
int CadastrarCliente(int qtdClientes);
int VerificaCodigo(int codigo, int qtdClientes);
void ListarClientes(int qtdClientes);
void ExcluirCliente();
#pragma endregion

//Structs
#pragma region Structs
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
#pragma endregion

struct Tipo_Cliente cliente[TOTALCLIENTE];

int main()
{

    int qtdClientes = 0;

    Menu(qtdClientes);
    
    system("pause");

}

//Menu de Clientes.
#pragma region Menu
void Menu(int qtdClientes)
{

    int opcao;

    do
    {
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

        switch(opcao)
        {
    
            case 1:
                qtdClientes = CadastrarCliente(qtdClientes);            
            break;
    
            case 2:
                ListarClientes(qtdClientes);
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
    while(opcao != 0);
}
#pragma endregion

//Função responsável por efetuar o Cadastro de Clientes.
#pragma region CadastrarCliente 
int CadastrarCliente(int qtdClientes)
{
    int codigo = 1;

    if(qtdClientes != TOTALCLIENTE)
    {
        while(codigo =! 0 || qtdClientes != TOTALCLIENTE)
        {   
            int existe = 0;

            system("cls");
            printf("======= CADASTRAR CLIENTES =======");
            printf("\n \t");
            fflush(stdin);

            printf("Informe o Codigo: ");
            scanf("%d", &cliente[qtdClientes].Codigo);
            existe = VerificaCodigo(cliente[qtdClientes].Codigo, qtdClientes);       
            
            if(existe == 1)
            {
                printf("Esse código já existe.");   
                getch();
            }
            else
            {
               
		        if(cliente[qtdClientes].Codigo != 0)
		        {
	
                    printf("\n \t");
			        fflush(stdin);
			        printf("Informe o Nome: ");
			        gets(cliente[qtdClientes].Nome);
			        printf("\n \t");
			        fflush(stdin);
			        printf("Informe a Rua: ");
			        gets(cliente[qtdClientes].Endereco.Rua);
			        printf("\n \t");
			        fflush(stdin);
			        printf("Informe o Numero: ");
			        scanf("%d", &cliente[qtdClientes].Endereco.Numero);
			        printf("\n \t");
			        fflush(stdin);
			        printf("Informe a Bairro: ");
			        gets(cliente[qtdClientes].Endereco.Bairro);
			        printf("\n \t");
			        fflush(stdin);
			        printf("Informe a Cidade: ");
			        gets(cliente[qtdClientes].Endereco.Cidade);
			        printf("\n \t");
			        fflush(stdin);
			        printf("Informe a Estado (sigla): ");
			        gets(cliente[qtdClientes].Endereco.Estado);
			        printf("\n \t");
			        fflush(stdin);
			        printf("Informe o Email: ");
			        gets(cliente[qtdClientes].Email);
			        printf("\n \t");
			        fflush(stdin);   
			
			        qtdClientes += 1;
	
		        }
		        else
		        {	
			        return qtdClientes;	
		        } 
            }                        
        }
    }
    else
    {
        printf("Fila cheia.");
        getch();
    }
    return qtdClientes;
}
#pragma endregion

//Função responsável por verificar se um código já existe.
#pragma region VerificaCodigo
int VerificaCodigo(int codigo, int qtdClientes)
{
    for(int i = 0; i < qtdClientes; i++)
    {
        if(codigo == cliente[qtdClientes - 1].Codigo)
        {
            return 1;
        }
    }
    return 0;
}
#pragma endregion

//Função responsável por Listar os Clientes.
#pragma region ListarClientes
void ListarClientes(int qtdClientes)
{

    system("cls");
    printf("======= LISTAR CLIENTES =======");

    for(int i = 0; i < qtdClientes; i++){

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
        printf("Cidade: %s", cliente[i].Endereco.Cidade);
        printf("\n \t");
        printf("Estado (sigla): %s", cliente[i].Endereco.Estado);
        printf("\n \t");
        printf("Informe o Email: %s", cliente[i].Email);       
        printf("\n\n");

    }
    getch();
}
#pragma endregion

//Função responsável por Excluir o Cliente.
#pragma region ExcluirCliente
void ExcluirCliente()
{    
    system("cls");
    printf("======= EXCLUIR CLIENTE =======");
    printf("\n \t");    
    
    getch();
}
#pragma endregion
