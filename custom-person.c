#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define hp 10;

int main(void){
    char personName[50], personClasse[50];
    int escolhaClasse, personHP;

    printf("Digite o nome do personagem: \n");
    gets(personName);
    printf("\n");

    printf("Escolha o tipo de treinamento: \n1- guerreiro\n2- mago\n3- cacador");
    scanf("%i", &escolhaClasse);

    switch(escolhaClasse){
        case 1:
            strcpy(personClasse, "Guerreiro");
            personHP = hp + 3;
        break;
        case 2:
            strcpy(personClasse, "Mago");
            personHP = hp + 2;
        break;
        case 3:
            strcpy(personClasse, "Cacador");
            personHP = hp + 1;
        break;
        default:
            printf("Valor invalido.");      
    }

    //Roteiro

    return 0;
}