/* 1) Dado um vetor de 10 Produtos e um vetor com 10 valores, identifique os seguintes requisitos:
A) O produto com maior valor - ok
B) O produto de menor valor
C) Quantidade de Produto de valores maior a R$100.
d) A soma do total dos produtos.

1: */

#include <stdio.h>
#include <string.h>

int main()
{
    int i, valor_maior = 0, valor_menor = 0, produtomaior = 0;
    char produtos[10][50];
    float valores[10];
    float soma_total = 0;

    //coletando as infos
    printf("Digite o nome dos produtos e seus valores:\n");
    for (i = 0; i < 10; i++)
    {
        printf("Produto %d: ", i + 1);
        scanf("%s", produtos[i]);

        printf("Valor: ");
        scanf("%f", &valores[i]);

        soma_total += valores[i];
    }

    //maior valor
    for (i = 1; i < 10; i++)
    {
        if (valores[i] > valores[valor_maior])
        {
            valor_maior = i;
        }
    }

    //menor valor
    for (i = 1; i < 10; i++)
    {
        if (valores[i] < valores[valor_menor])
        {
            valor_menor = i;
        }
    }

    for (i = 0; i < 10; i++)
    {
        if (valores[i] > 100)
        {
            produtomaior++;
        }
    }

    // mostrando valores
    printf("\nO produto com maior valor é: %s (R$%.2f)\n", produtos[valor_maior], valores[valor_maior]);
    printf("O produto com menor valor é: %s (R$%.2f)\n", produtos[valor_menor], valores[valor_menor]);
    printf("Quantidade de produtos com valor maior que 100: %d\n", produtomaior);
    printf("Soma total dos produtos: R$%.2f\n", soma_total);

    return 0;
}
