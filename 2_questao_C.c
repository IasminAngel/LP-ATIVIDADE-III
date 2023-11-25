#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float soma = 0;
    float media[5];
	int idade[5][1];
    char nomes[5][200];
    float notas[5][3];
    int i, j, a;

    printf("Coloque o nome do aluno, por favor:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d° Nome dos alunos:\n", i+1);
        gets(nomes[i]);
        
        for(a=0; a < 1; a++){
        	printf("%d° Idade:\n", a+1);
        	scanf("%d°", &idade[i][a]); 
		}

        for (j = 0; j < 3; j++){
            printf("%d° Digite a nota:\n", j+1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j];
        }
        media[i] = soma / j;
        soma = 0;
        fflush(stdin);
    }

	system("cls||clear"); 
	
    printf("\nExibindo as informacoes das materias...\n");

    for (i = 0; i < 5; i++)
    {
        printf("\nNome dos alunos:%s\n", nomes[i]);
        
         for (a = 0; a < 1; a++)
        {
           printf("Idade:%d\n", idade[i][a]);
        }

        for (j = 0; j < 3; j++)
        {
            printf("%d Nota: %.1f \n", j + 1, notas[i][j]);
        }

        printf("Media:%.1f \n", media[i]);
        

        if (media[i] >= 7)
        {
            printf("Aprovado!");
        }
        else if (media[i] < 5)
        {
            printf("Reprovado!");
        }
        else
        {
            printf("Recuperacao!");
        }
    }
}