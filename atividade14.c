#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{

    setlocale  (LC_ALL, "portugese");



    int numero, contagem_pares = 0, contagem_impares = 0;
    int soma_pares = 0, soma_impares = 0;

    printf("Digite números inteiros (para encerrar, digite um número negativo):\n");

    while (1) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero < 0) {
            break;  
        }

        if (numero % 2 == 0) {
            contagem_pares++;
            soma_pares += numero;
        } else {
            contagem_impares++;
            soma_impares += numero;
        }
    }

    if (contagem_pares > 0) {
        printf("Quantidade de números pares: %d\n", contagem_pares);
        printf("Média dos números pares: %.2lf\n", (double)soma_pares / contagem_pares);
    } else {
        printf("Nenhum número par foi digitado.\n");
    }

    if (contagem_impares > 0) {
        printf("Quantidade de números ímpares: %d\n", contagem_impares);
        printf("Média dos números ímpares: %.2lf\n", (double)soma_impares / contagem_impares);
    } else {
        printf("Nenhum número ímpar foi digitado.\n");
    }

    
}
