#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    int opcao;
    int opcao2;
    int opcao3;
    setlocale(LC_ALL, "portuguese");
    do
    {

        printf("| Codigo |     opções    |\n");
        printf("|   1    |   Novo jogo   |\n");
        printf("|   2    | Carregar jogo |\n");
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
            printf("Responda com 4 para voltar ao ultimo chekpoint:\n5 para voltar ao menu\n: ");
            scanf("%d", &opcao2);
            switch (opcao2)
            {
            case 4:
                printf("Inicializando o jogo");
                break;
            case 5:
                printf("| Codigo |     opções    |\n");
                printf("|   1    |   Novo jogo   |\n");
                printf("|   2    | Carregar jogo |\n");
                printf("|   3    | Configurações |\n\n");
                printf("Informe a opção: ");
                scanf("%d", &opcao);
                system("CLS");
                break;
            default:
                printf("Codigo invalido ");
            }
        case 3:
            printf(" | Som  | Graficos  |  Controles   |\n");
            printf (" |  7   |     9     |      8       |\n");
            printf ("Escolha uma das opções: ");
            scanf ("%d", &opcao3);
            switch (opcao3)
            {
                case 7:
            printf ("Aumentar volume:\nAbaixar volume:\n Mutar microfone: ");
            break;
            case 9:
            printf ("Resolução: 1080p\nFrames rate: 46\n Fps: 150 ");
            break;
            case 8:
            printf (""); 
            break;
            default:
            printf ("Codigo invlido...");
            }
            break;
        default:
            printf("Codigo invalido! ");
        }
    } while (opcao < 1 || opcao > 3);
}