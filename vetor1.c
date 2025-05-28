#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numeros[5] = {5, 5, 5, 5, 5};
    int soma = 0;

    for (int i = 0; i < 5; i++)
    {
        soma += numeros[i];
    }

    printf("%d", soma);
    
    return 0;
}
