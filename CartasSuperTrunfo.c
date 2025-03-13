#include <stdio.h>

//Desafio Super Trunfo - Países
//Tema 1 - Cadastro das Cartas
//Esse código serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
//Siga os comentários para implementar cada parte do desafio
//Teste

int main(){

    //Variáveis separadas para cada atributo

    char Estado;
    char Código_da_Carta[5];
    char Nome_da_cidade[50];
    int População;
    float Area_KM_2;
    float PIB;
    int Quantidade_Pontos_Turísticos;

    //Capturando os valores

    printf("Insira uma letra de A até H: \n");
    scanf("%c", &Estado);

    printf("Insira a letra do estado + um número de 01 à 04: \n");
    scanf("%4s", &Código_da_Carta);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &Nome_da_cidade);

    printf("Insira o número de habitantes da cidade: \n");
    scanf("%d", &População);

    printf("Insira a área da cidade em km²: \n");
    scanf("%f", &Area_KM_2);

    printf("Insira o PIB da cidade: \n") //PIB = Produto Interno Bruto
    scanf("%f", &PIB)




}