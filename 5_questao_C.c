#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, j, n, escolha, quantia[5][1], vendas;
    char nome[5][200];
    float preco[5][1];

    do
    {
        printf("Deseja aplicar um produto ou ver os produtos aplicados ?\n");
        printf("Aplicar (1), Ver e encerrar (2) ?\n");
        scanf("%d", &escolha);

        if (escolha == 1)
        {
            printf("Adicione um produto:\n");

            for (i = 0; i < 1; i++)
            {
                fflush(stdin);
                gets(nome[i]);

                for (n = 0; n < 1; n++)
                {
                    printf("Adicione a quantia:\n");
                    scanf("%d", &quantia[i][n]);
                    fflush(stdin);
                }

                for (j = 0; j < 1; j++)
                {
                    printf("Adicione o preco dele:\n");
                    scanf("%f", &preco[i][j]);
                }
                
                    printf("Quantas vendas teve do produto ?:\n");
                    scanf("%d", &vendas);
                    fflush(stdin);
                    vendas++;
            }
        }

    } while (escolha != 2);

    for (i = 0; i < 1; i++)
    {
        printf("%d | Nome produto: %s\n", i + 1, nome[i]);

        for (j = 0; j < 1; j++)
        {
            printf("%d | preco do produto: %.2f\n", i + 1, preco[i][j]);
        }

        for (n = 0; n < 1; n++)
        {
            printf("Quantia: | %d\n", quantia[i][n]);
        }
    }
    printf("Vendas:%d", vendas-1);
}