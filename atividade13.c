#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{
    setlocale (LC_ALL, "portuguese");
    int numero1, numero2;

    printf("Digite o primeiro n�mero inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo n�mero inteiro: ");
    scanf("%d", &numero2);

    if (numero1 == numero2)
    {
        printf("Os n�meros s�o iguais.\n");
    }
    else if (numero1 > numero2)
    {
        printf("O primeiro n�mero  � maior que o segundo n�mero .\n");
    }
}