#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{
    setlocale (LC_ALL, "portuguese");
    int numero1, numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    if (numero1 == numero2)
    {
        printf("Os números são iguais.\n");
    }
    else if (numero1 > numero2)
    {
        printf("O primeiro número  é maior que o segundo número .\n");
    }
}