#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Affiche tous les entiers de n  98
 *@n: Le nombre a partir duquel comment l'affichage
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%d, ", n);
if (n < 98)
{
n++;
}
else
{
n--;
}
}
printf("%d\n", n);
}
