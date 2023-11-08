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

    printf("Digite n�meros inteiros (para encerrar, digite um n�mero negativo):\n");

    while (1) {
        printf("Digite um n�mero: ");
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
        printf("Quantidade de n�meros pares: %d\n", contagem_pares);
        printf("M�dia dos n�meros pares: %.2lf\n", (double)soma_pares / contagem_pares);
    } else {
        printf("Nenhum n�mero par foi digitado.\n");
    }

    if (contagem_impares > 0) {
        printf("Quantidade de n�meros �mpares: %d\n", contagem_impares);
        printf("M�dia dos n�meros �mpares: %.2lf\n", (double)soma_impares / contagem_impares);
    } else {
        printf("Nenhum n�mero �mpar foi digitado.\n");
    }

    
}
