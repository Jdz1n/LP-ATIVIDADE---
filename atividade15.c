#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{

    setlocale(LC_ALL, "portugese");

   
    
        int opcao;
        double valor, resultado;

        while (1)
        {
            printf("Escolha a op��o de convers�o:\n");
            printf("1. Quil�metros para Milhas\n");
            printf("2. Celsius para Fahrenheit\n");
            printf("0. Sair do programa\n");
            printf("Digite o n�mero da op��o: ");
            scanf("%d", &opcao);

            if (opcao == 0)
            {
                printf("Saindo do programa. At� a pr�xima!\n");
                break;
            }

            switch (opcao)
            {
            case 1:
                printf("Digite a dist�ncia em quil�metros: ");
                scanf("%lf", &valor);
                resultado = valor * 0.621371;
                printf("%.2lf quil�metros � igual a %.2lf milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%lf", &valor);
                resultado = (valor * 9.0 / 5.0) + 32.0;
                printf("%.2lf graus Celsius � igual a %.2lf graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Op��o inv�lida. Escolha uma op��o v�lida.\n");
            }
        }

    }
