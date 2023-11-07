#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
    setlocale(LC_ALL, "portuguese");

    float valorDaConta;
    int opcao;
    float somaTotal;

    printf("| Codigo  |      dia      |    Descrição  |\n");
    printf("|   2     | segunda-feira |   Dia útil    |\n");
    printf("|   3     |  terça-feira  |   Dia útil    |\n");
    printf("|   4     |  quarta-feira |   Dia útil    |\n");
    printf("|   5     |  quinta-feira |   Dia útil    |\n");
    printf("|   6     |  sexta-feira  |   Dia útil    |\n");
    printf("|   7     |    sabado     | Fim de semana |\n");
    printf("|   1     |    domingo    | Fim de semana |\n\n\n");

    printf("Informe o dia da semana: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("informe o valor da compra: ");
        scanf("%f", &valorDaConta);
        if (valorDaConta > 100)
        {
            somaTotal = valorDaConta * 0.85;
        }
        break;
    case 2:
        printf("informe o valor da compra: ");
        scanf("%f", &valorDaConta);

        if (valorDaConta > 100)
        {
            somaTotal = valorDaConta * 0.90;
        }
        break;
    case 3:
        printf("informe o valor da compra: ");
        scanf("%f", &valorDaConta);

        if (valorDaConta > 100)
        {
            somaTotal = valorDaConta * 0.90;
        }
        break;

    case 4:
        printf("informe o valor da compra: ");
        scanf("%f", &valorDaConta);

        if (valorDaConta > 100)
        {
            somaTotal = valorDaConta * 0.90;
        }
        break;
    case 5:
        printf("informe o valor da compra: ");
        scanf("%f", &valorDaConta);

        if (valorDaConta > 100)
        {
            somaTotal = valorDaConta * 0.90;
        }
        break;
    case 6:
        printf("informe o valor da compra: ");
        scanf("%f", &valorDaConta);

        if (valorDaConta > 100)
        {
            somaTotal = valorDaConta * 0.90;
        }
        break;
    case 7:
        printf("informe o valor da compra: ");
        scanf("%f", &valorDaConta);
        if (valorDaConta > 100)
        {
            somaTotal = valorDaConta * 0.85;
        }
        break;
        default:
        printf("Codigo invalido ");
    }
    system ("CLS");
    printf ("Valor do protudo: %.2f\n", valorDaConta);
    printf ("Valor do protudo com desconto: %.2f", somaTotal);
}