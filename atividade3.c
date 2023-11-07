#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");
    float nota;
    do
    {
        printf("Informe sua nota: ");
        scanf("%f", &nota);

        system("CLS");

        if (nota >= 9)
        {
            printf("Nota exelente");
        }
        if (nota <= 8.9 && nota >= 7)
        {
            printf("Nota boa");
        }
        if (nota >= 5 && nota <= 6.9)
        {
            printf("Nota razoavel");
        }
        if (nota < 5)
        {
            printf("Nota insuficiente");
        }
    } while (nota < 0 || nota > 10);
}
