
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    int a;
    int numero;
    printf("informe o numero: ");
    scanf("%d", &numero);
    for (a = numero; a >= 1; a--)
    {
        printf(" %d ",a );
    }
}