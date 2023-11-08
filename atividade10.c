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

    printf("Digite o primeiro número: ");
    scanf("%lf", &numero1);

    printf("Digite o segundo número: ");
    scanf("%lf", &numero2);

    printf("Escolha uma operação matemática (+ ou -): ");
    scanf(" %c", &operacao);
    switch (operacao) {
        case '+':
            resultado = numero1 + numero2;
            printf("O resultado da soma é: %.2lf\n", resultado);
            break;
        case '-':
            resultado = numero1 - numero2;
            printf("O resultado da subtração é: %.2lf\n", resultado);
            break;
        default:
            printf("Operação inválida. Por favor, escolha + ou -.\n");
    }


}