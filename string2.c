#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char nome[20];
    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);

    printf("%s", nome);

    return 0;
}

