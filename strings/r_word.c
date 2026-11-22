#include <stdio.h>
#include <string.h>
#define TAMANHO 25

int main()
{
    char string[TAMANHO];
    char rstring[TAMANHO];
    int j = 0;

    printf("Digite uma frase: ");
    scanf("\n%24[^\n]", string);

    size_t stam = strlen(string);

    for (int i = stam - 1; i >= 0; i--)
    {
        rstring[j] = string[i];
        j++;
    }

    rstring[j] = '\0';
    printf("palavra ao contrario: %s", rstring);
    return 0;
}
