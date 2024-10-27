#include "main.h"
/**
* print_last_digit - Affiche le dernier chiffre d'un nombre.
* @n: Le nombre dont on veut obtenir le dernier chiffre.
*
* Return: Le dernier chiffre du nombre.
*/
int print_last_digit(int n)
{
int last_digit = n % 10;
if (last_digit < 0)
last_digit = -last_digit;
_putchar(last_digit + '0');
return (last_digit);
}
