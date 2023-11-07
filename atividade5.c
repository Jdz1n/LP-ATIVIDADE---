#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    int opcao;
    do
    {
        system ("CLS");
        printf("|Codigo |  Idioma  |\n");
        printf("|   1   |  Inglês  |\n");
        printf("|   2   | Espanhol |\n");
        printf("|   3   |  Francês |\n\n\n");

        printf("Escolha o idioma de preferencia:  ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("welcome");
            break;
        case 2:
            printf("bienvenida");
            break;
        case 3:
            printf("accueillir");
            break;
            default:
            printf ("Codigo invalido, tente novamente");
        }
    }while (opcao < 1 || opcao > 3);

}