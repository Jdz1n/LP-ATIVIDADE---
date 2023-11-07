#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int opcao;
    setlocale(LC_ALL, "portuguese");
    do
    {
        printf("| Codigo | Produto  |\n");
        printf("|   1    | Camiseta |\n");
        printf("|   2    |   calça  |\n\n");
        printf("Informe qual produto deseja: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Produto escolhido: Camiseta.\n");
            printf("Valor do produto: 850,70");
            break;
        case 2:
            printf("Produto escolhido: Calça.\n");
            printf("Valor do produto: 1000.00");
            break;
        default:
            printf("Codigo invalido");
        }
    } while (opcao < 1 || opcao > 2);
}