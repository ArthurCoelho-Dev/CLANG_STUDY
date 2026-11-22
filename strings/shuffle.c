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

    printf("Digite uma palvra: ");
    scanf("\n%49[^\n]", palavra);

    size_t tam = strlen(palavra);

    strcpy(permuta, palavra);

    for (int i = tam - 1; i > 0; i--)
    {
     int j = rand() % (i + 1);

     char hold = permuta[i];
     permuta[i] = permuta[j];
     permuta[j] = hold;

    }
    
    printf("A palavra permutada eh: %s", permuta);

    return 0;
}

// Escrever um programa que leia 100 palavras (uma por uma) e permute ("embaralhe") todas as suas letras de posição. Para permutar as posições, use a função rand. Exibir cada palavra permutada.
