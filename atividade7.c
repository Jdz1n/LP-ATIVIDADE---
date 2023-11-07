#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int opcao;
    int opcao2;
    setlocale(LC_ALL, "portuguese");
    do
    {

        printf("| Codigo |     opções    |\n");
        printf("|   1    |   Novo jogo   |\n");
        printf("|   2    | Carregar jogo |\n\n");
        printf("|   3    | Configurações |\n\n");
        printf("Informe a opção: ");
        scanf("%d", &opcao);
        system("CLS");
        switch (opcao)
        {
        case 1:
            printf("Inicializando o jogo");
            break;
        case 2:
            printf("Responda com S ou N\nDeseja recomeçar do ultimo chekpoint: ");
            scanf("%d", &opcao2);

            break;
        case 3:
            printf(" Som  | Graficos  |  Controles   |\n ");
            break;
        default:
            printf("Codigo invalido! ");
        }
    } while (opcao < 1 || opcao > 3);
}