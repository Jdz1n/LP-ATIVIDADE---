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
            printf("Escolha a opção de conversão:\n");
            printf("1. Quilômetros para Milhas\n");
            printf("2. Celsius para Fahrenheit\n");
            printf("0. Sair do programa\n");
            printf("Digite o número da opção: ");
            scanf("%d", &opcao);

            if (opcao == 0)
            {
                printf("Saindo do programa. Até a próxima!\n");
                break;
            }

            switch (opcao)
            {
            case 1:
                printf("Digite a distância em quilômetros: ");
                scanf("%lf", &valor);
                resultado = valor * 0.621371;
                printf("%.2lf quilômetros é igual a %.2lf milhas.\n", valor, resultado);
                break;
            case 2:
                printf("Digite a temperatura em graus Celsius: ");
                scanf("%lf", &valor);
                resultado = (valor * 9.0 / 5.0) + 32.0;
                printf("%.2lf graus Celsius é igual a %.2lf graus Fahrenheit.\n", valor, resultado);
                break;
            default:
                printf("Opção inválida. Escolha uma opção válida.\n");
            }
        }

    }
