#include <stdio.h>
#include <string.h>
#define TAMANHO 50

int main()
{
    char string[TAMANHO];
    int brancos = 0;

    printf("Digite uma frase: ");
    scanf("\n%49[^\n]", string);
    size_t tam = strlen(string);

    for (int i = 0; i < tam; i++)
    {
        if (string[i] == ' ')
        {
            brancos = brancos + 1;
        }
    }
    printf("Total de espaços na frase eh de: %d", brancos);

    return 0;
}
