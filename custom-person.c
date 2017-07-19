#include <stdio.h>
#include <stdlib.h>
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
            personClasse[50] = "guerreiro";
        break;
        case 2:
            personClasse[50] = "mago";
        break;
        case 3:
            personClasse[50] = "cacador";
        break;
        default:
            printf("Valor invalido.");      
    }
    return 0;
}