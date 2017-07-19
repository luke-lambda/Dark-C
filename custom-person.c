#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define hp 40;

int main(void){
    char personName[50], personClasse[50];
    int escolhaClasse;

    printf("Digite o nome do personagem: \n");
    gets(personName);
    printf("\n");

    printf("Escolha o tipo de treinamento: \n1- guerreiro\n2- mago\n3- cacador");
    scanf("%i", &escolhaClasse);

    switch(escolhaClasse){
        case 1:
            strcpy(personClasse, "Guerreiro");
        break;
        case 2:
            strcpy(personClasse, "Mago");
        break;
        case 3:
            strcpy(personClasse, "Cacador");
        break;
        default:
            printf("Valor invalido.");      
    }
    return 0;
}