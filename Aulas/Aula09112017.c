#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <string.h>
#include <math.h>

void Menu();
void EscolhaMenu();
void TrianguloQualquer();
float CalcularTrianguloQualquer(float altura, float base);
void TrianguloEquilatero();
float CalcularTrianguloEquilatero(float resultado);

int main(){

    Menu();    

    system("pause");
}

void Menu(){

    int opcao;

    do{
        
        system("cls");
        printf("---- Menu ---- \n");
        printf("1 - Triangulo Qualquer \n");
        printf("2 - Triangulo Equilatero \n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        EscolhaMenu(opcao);

    }while(opcao != 0);

}

void EscolhaMenu(int opcao){

    switch(opcao){
        case 1:
            TrianguloQualquer();
        break;
        case 2:
            TrianguloEquilatero();
        break;
        case 0:
            printf("Saindo...\n");
        break;

        default:
            printf("Opcao invalida");
            getch();
        break;
    }

}

void TrianguloQualquer(){


    float altura, base, resultado;

    system("cls");
    printf("---- Triangulo Qualquer ---- \n");
    printf("Informe a Altura: ");
    scanf("%f", &altura);
    printf("\nInforme a base: ");
    scanf("%f", &base);

    resultado = CalcularTrianguloQualquer(altura, base);

    printf("Resultado: %.2f", resultado);
    getch();

}

float CalcularTrianguloQualquer(float altura, float base){
    
    float resultado = (base * altura) / 2;

    return resultado;

}

void TrianguloEquilatero(){

    float altura, resultado;

    system("cls");
    printf("---- Triangulo Equilatero ---- \n");
    printf("Informe a altura: ");
    scanf("%f", &altura);

    resultado = CalcularTrianguloEquilatero(altura);

    printf("Resultado: %.2f", resultado);
    getch();

}

float CalcularTrianguloEquilatero(float altura){

    float resultado = (altura * altura) / sqrt(3);

    return resultado;

}