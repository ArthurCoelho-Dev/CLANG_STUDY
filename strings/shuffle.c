#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define TAMANHO 50

int main()
{
    char palavra[TAMANHO];
    char permuta[TAMANHO];

    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        printf("Digite uma palvra: ");
        scanf("\n%49[^\n]", palavra);

        size_t tam = strlen(palavra);

        strcpy(permuta, palavra);

        for (int j = tam - 1; j > 0; j--)
        {
            int k = rand() % (j + 1);

            char hold = permuta[j];
            permuta[j] = permuta[k];
            permuta[k] = hold;
        }

        printf("A palavra permutada eh: %s\n\n", permuta);
    }

    return 0;
}

// Escrever um programa que leia 100 palavras (uma por uma) e permute ("embaralhe") todas as suas letras de posição. Para permutar as posições, use a função rand. Exibir cada palavra permutada.
