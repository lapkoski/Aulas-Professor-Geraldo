#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

#define TOTALCLIENTE 3

//Subrotinas
#pragma region Subrotinas
int CadastrarCliente(int qtdClientes);
int VerificaCodigoExiste(int codigo, int qtdClientes);
int VerificaValorCodigo(int codigo, int qtdClientes);
void ListarClientes(int qtdClientes);
int ExcluirCliente(int qtdClientes);
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
                qtdClientes = ExcluirCliente(qtdClientes);
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
    
    system("pause");

}

//Função responsável por efetuar o Cadastro de Clientes.
#pragma region CadastrarCliente 
int CadastrarCliente(int qtdClientes)
{
    int codigo = 1;

    if(qtdClientes != TOTALCLIENTE)
    {
        while(codigo =! 0)
        {   
            int existe = 0, valido = 0;

            system("cls");
            printf("======= CADASTRAR CLIENTES =======");
            printf("\n \t");
            fflush(stdin);

            if(qtdClientes == TOTALCLIENTE)
            {
                printf("\n \t");
                printf("Fila cheia.");
                getch();
                return qtdClientes;
            }

            printf("Informe o Codigo: ");
            scanf("%d", &cliente[qtdClientes].Codigo);
            
            valido = VerificaValorCodigo(cliente[qtdClientes].Codigo, qtdClientes);            
            existe = VerificaCodigoExiste(cliente[qtdClientes].Codigo, qtdClientes);       

            if(cliente[qtdClientes].Codigo == 0)
            {
                return qtdClientes;
            }

            if(valido == 1)
            {
                printf("\n \t");
                printf("Codigo deve ser menor que 100.");   
                getch();
            }
            
            if(existe == 1)
            {
                printf("\n \t");
                printf("Esse codigo ja existe.");   
                getch();
            }
            
            else
            {                
		        if(cliente[qtdClientes].Codigo != 0 && valido == 0)
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
            }                        
        }
    }
    else
    {
        printf("\n \t");
        printf("Fila cheia.");
        getch();
    }
    return qtdClientes;
}
#pragma endregion

//Função responsável por verificar se um código é maior mque 100.
#pragma region VerificaValorCodigo
int VerificaValorCodigo(int codigo, int qtdClientes)
{
    if(codigo < 100)
    {
        return 1;
    }
    return 0;
}
#pragma endregion

//Função responsável por verificar se um código já existe.
#pragma region VerificaCodigoExiste
int VerificaCodigoExiste(int codigo, int qtdClientes)
{
	int i;
	
    for(i = 0; i < qtdClientes; i++)
    {
        if(codigo == cliente[i].Codigo)
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

	int i;
	
    if(qtdClientes != 0)
    {
        for(i = 0; i < qtdClientes; i++){

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
            printf("E-mail: %s", cliente[i].Email);       
            printf("\n\n");
        
        }
        getch();
    }
    else
    {
        printf("\n \t");
        printf("Nao ha clientes para listar.");
        getch();
    }
}
#pragma endregion

//Função responsável por Excluir o Cliente.
#pragma region ExcluirCliente
int ExcluirCliente(int qtdClientes)
{    
    int codigo = 1, i = 0, encontrou = 0, posicao = 0;
    char confirmar = 'S';
        
    while(codigo != 0)
    {
        
        system("cls");
        printf("======= EXCLUIR CLIENTE =======");
        printf("\n \t");
        printf("\n\tInforme o codigo: ");
        scanf("%d", &codigo);
        
        if(codigo != 0)
        {
            for(i = 0; i < qtdClientes; i++)
            {
                if(cliente[i].Codigo == codigo)
                { 
                    encontrou = 1;
                    posicao = i;
                }               
            } 

            if(encontrou == 0)
            {
                printf("\n \t");
                printf("Codigo Inexistente.");
                getch();
            }
            else
            {
                system("cls");
                printf("======= EXCLUIR CLIENTE =======");
                printf("\n \t");  
                printf("Codigo: %d", cliente[posicao].Codigo);
                printf("\n \t"); 
                printf("Nome: %s", cliente[posicao].Nome);
                printf("\n \t");
                printf("Rua: %s", cliente[posicao].Endereco.Rua);
                printf("\n \t");
                printf("Numero: %d", cliente[posicao].Endereco.Numero);  
                printf("\n \t");   
                printf("Bairro: %s", cliente[posicao].Endereco.Bairro);
                printf("\n \t");
                printf("Cidade: %s", cliente[posicao].Endereco.Cidade);
                printf("\n \t");
                printf("Estado (sigla): %s", cliente[posicao].Endereco.Estado);
                printf("\n \t");
                printf("E-mail: %s", cliente[posicao].Email);       
                printf("\n\n");

                fflush(stdin);
                printf("\n\nDeseja mesmo deletar o cliente? (S/N)");
                scanf("%c", &confirmar);

                confirmar = toupper(confirmar);

                if(confirmar == 'S')
                {

                    cliente[posicao].Codigo = cliente[qtdClientes - 1].Codigo;
                    strcpy(cliente[posicao].Nome, cliente[qtdClientes - 1].Nome);
                    strcpy(cliente[posicao].Endereco.Rua, cliente[qtdClientes - 1].Endereco.Rua);
                    cliente[posicao].Endereco.Numero = cliente[qtdClientes - 1].Endereco.Numero;
                    strcpy(cliente[posicao].Endereco.Bairro, cliente[qtdClientes - 1].Endereco.Bairro);
                    strcpy(cliente[posicao].Endereco.Cidade, cliente[qtdClientes - 1].Endereco.Cidade);
                    strcpy(cliente[posicao].Endereco.Estado, cliente[qtdClientes - 1].Endereco.Estado);
                    strcpy(cliente[posicao].Email, cliente[qtdClientes - 1].Email);
                    
                    qtdClientes -= 1;

                    printf("\n \t");
                    printf("Operacao Realizada");

                    getch();
                }   
            }                                
        }
    }

    return qtdClientes;
}
#pragma endregion
