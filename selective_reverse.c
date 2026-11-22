#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO 20

int main()
{
    char palavra[TAMANHO];
    char rpalavra[TAMANHO];
    int qtd;

    printf("Digite uma palavra: ");
    scanf("\n%19[^\n]", palavra);
    size_t tam = strlen(palavra);

    strcpy(rpalavra, palavra);

    printf("Inverta ate que letra: ");
    scanf("%d", &qtd);

    if (qtd >= 2 && qtd <= tam)
    {
        for (int i = 0; i < qtd / 2; i++)
        {
            char hold = rpalavra[i];
            rpalavra[i] = rpalavra[qtd - 1 - i];
            rpalavra[qtd - 1 - i] = hold;
        }
        
        printf("Palavra original: %s\n", palavra);
        printf("Palavra invertida ate a %d letra: %s\n", qtd, rpalavra);
    }
    else
    {
        printf("Inserção invalida: [ N ≥ 2 e N ≤ Tamanho da Palavra ]");
    }
}

// Escrever um programa que leia 100 palavras (uma por uma) e inverta somente as N primeiras letras. Onde o valor de N é inteiro: [ N ≥ 2 e N ≤ Tamanho da Palavra ] escolhido pelo usuário.
