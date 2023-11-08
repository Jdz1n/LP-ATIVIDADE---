#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    char codigoSalvo[] = "1234";
    char codigo[10];

    while (1)
    {
        printf("Digite o código de acesso: ");
        scanf("%s", codigo);

        if (strcmp(codigo, codigoSalvo) == 0)
        {
            printf("Acesso permitido. Bem-vindo!\n");
            break;
        }
        else
        {
            printf ("Acesso negado\ntente novamente\n");
        }
    }
}
