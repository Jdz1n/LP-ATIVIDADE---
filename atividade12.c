#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

void main()
{
    setlocale (LC_ALL, "portuguese");
    int i;
    int quantidadeNotas;
    float nota;
    float soma = 0.0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidadeNotas);

    if (quantidadeNotas <= 0)
    {
        printf("A quantidade de notas deve ser um número positivo.\n");
        return 1;
    }

    for (i = 1; i <= quantidadeNotas; i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    float media = soma / quantidadeNotas;

    system ("CLS");

    printf("A média das %d notas digitadas é: %.2f\n", quantidadeNotas, media);
}
