#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void main()
{
setlocale(LC_ALL, "portuguese");

int opcao;

printf ("Qual a temperatura?\nInforme a temperatura: ");
scanf ("%d", &opcao);

system ("CLS");

if (opcao > 25)
{
printf ("O clima est� ensolarado!");
}
if (opcao <= 25 && opcao > 14)
{
    printf ("O clima est� nublado!");
}
if (opcao < 15)
{
    printf ("O clima est� chuvoso");
}
}