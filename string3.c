#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    
    char nome[20];
    printf("Digite seu nome: ");
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")] = '\0';

    printf("%s \n", nome);
    printf("Seu nome tem: %zu caracteres \n", strlen(nome));

    return 0;
}

