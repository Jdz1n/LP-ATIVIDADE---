#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{

    setlocale  (LC_ALL, "portugese");
    double numero1, numero2, resultado;
    char operacao;

    printf("Digite o primeiro n�mero: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo n�mero: ");
    scanf("%lf", &numero2);

    printf("Escolha uma opera��o matem�tica (+ ou -): ");
    scanf(" %c", &operacao);
    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("O resultado da soma �: %.2lf\n", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("O resultado da subtra��o �: %.2lf\n", resultado);
            break;
        default:
            printf("Opera��o inv�lida. Por favor, escolha + ou -.\n");
    }


}