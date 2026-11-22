#include <stdio.h>
#define TAMANHO 50

float totalCarrinho(float preco_uni[TAMANHO], float quantidade[TAMANHO], int qtd_carrinho)
{

    float total = 0;

    for (int i = 0; i < qtd_carrinho; i++)
    {
        total = total + (preco_uni[i] * quantidade[i]);
    }
    return total;
}

int main()
{
    int opcao;
    int codigo[TAMANHO];
    float quantidade[TAMANHO];
    float preco_uni[TAMANHO];
    int qtd_carrinho = 0;
    float total;

    for (int i = 0; i < TAMANHO;)
    {
        printf("CARRINHO DE COMPRAS \n\n");
        printf("Opcao 01: Cadastrar novo produto.\n");
        printf("Opcao 02: Total do carrinho.\n");

        scanf("%d", &opcao);

        if (opcao == 1 || opcao == 01)
        {
            printf("\n");
            printf("Informe o codigo do item %d: ", i + 1);
            scanf("%d", &codigo[i]);

            do
            {
                printf("Informe o valor unitario do item %d: ", i + 1);
                scanf("%f", &preco_uni[i]);

                if (preco_uni[i] < 0.25)
                {
                    printf("O valor precisa ser maior que 0,25 centavos");
                }

            } while (preco_uni[i] < 0.25);

            do
            {
                printf("Informe a quantidade do item %d: ", i + 1);
                scanf("%f", &quantidade[i]);

                if (quantidade[i] <= 0)
                {
                    printf("Insira uma quantidade maior que zero.");
                }

            } while (quantidade[i] <= 0);
            i++;
            qtd_carrinho++;

            printf("\n");
        }
        else if (opcao == 2 || opcao == 02)
        {
            if (qtd_carrinho > 0)
            {
                total = totalCarrinho(preco_uni, quantidade, qtd_carrinho);
                printf("Total do carrinho com %d itens: RS%.2f", qtd_carrinho, total);
                break;
            }
            else
            {
                printf("O carrinho precisa de ao menos um item.");
            }
        }
        else
        {
            printf("Opcao invalida, selecione novamente.\n\n");
        }
    }
    if (qtd_carrinho == TAMANHO)
    {
        total = totalCarrinho(preco_uni, quantidade, qtd_carrinho);
        printf("Carrinho atingiu o limite maximo de 50 itens, o total de seu carrinho foi de RS%.2f", total);
    }
    return 0;
}

// EXERCÍCIO 33 — Total do carrinho de compras
// Cadastre 50 produtos em três vetores paralelos: código (int), preço unitário (float ≥0,25) e
// quantidade (float >0). Calcule o valor total do carrinho somando preço×quantidade de cada
// produto.
// Protótipo(s) sugerido(s): float totalCarrinho(float precos[TAMANHO], float
// quantidades[TAMANHO]);
