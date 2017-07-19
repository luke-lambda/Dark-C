#include <stdio.h>
#include <stdlib.h>
#define hp 40;

int main(){
    char personName[50];
    int classe;

    printf("Digite o nome do personagem: \n");
    gets(personName, "\n");

    printf("Escolha o tipo de treinamento: \n1- guerreiro\n2- mago\n3- cacador");
    scanf("%i", &classe);
}