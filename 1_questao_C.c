#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    char nome[5][200];
    char nome_maior_a[200], nome_menor_a[200], nome_maior_p[200], nome_menor_p[200], nome_maior_i[200], nome_menor_i[200];
    float peso[5], altura[5], idade[5], maior_a = 0, menor_a = 999, maior_p = 0, menor_p = 999, maior_i = 0, menor_i = 999;

    printf("\nSolicitando informações ao cliente:\n");

    for (i = 0; i < 5; i++)
    {
        printf("%d° nome:\n", i + 1);
        fgets(nome[i], sizeof(nome[i]), stdin);
        nome[i][strcspn(nome[i], "\n")] = '\0';

        printf("%d° peso:\n", i + 1);
        scanf("%f", &peso[i]);

        printf("%d° altura:\n", i + 1);
        scanf("%f", &altura[i]);

        fflush(stdin);
        printf("%d° idade:\n", i + 1);
        scanf("%f", &idade[i]);

        fflush(stdin);
    }

    for (i = 0; i < 5; i++)
    {

        if (maior_a < altura[i])
        {
            maior_a = altura[i];
            strcpy(nome_maior_a, nome[i]);
        }
        if (menor_a > altura[i])
        {
            menor_a = altura[i];
            strcpy(nome_menor_a, nome[i]);
        }
        if (maior_p < peso[i])
        {
            maior_p = peso[i];
            strcpy(nome_maior_p, nome[i]);
        }
        if (menor_p > peso[i])
        {
            menor_p = peso[i];
            strcpy(nome_menor_p, nome[i]);
        }
        if (maior_i < idade[i])
        {
            maior_i = idade[i];
            strcpy(nome_maior_i, nome[i]);
        }
        if (menor_i > idade[i])
        {
            menor_i = idade[i];
            strcpy(nome_menor_i, nome[i]);
        }
    }

    fflush(stdin);
    printf("Nome: %s (alto: %.2f): \n", nome_maior_a, maior_a);
    printf("Nome: %s (baixo: %.2f): \n", nome_menor_a, menor_a);
    printf("Nome: %s (maior peso: %.2f): \n", nome_maior_p, maior_p);
    printf("Nome: %s (menor peso: %.2f): \n", nome_menor_p, menor_p);
    printf("Nome: %s (maior idade: %.0f): \n", nome_maior_i, maior_i);
    printf("Nome: %s (menor idade: %.0f): \n", nome_menor_i, menor_i);

    return 0;
}

