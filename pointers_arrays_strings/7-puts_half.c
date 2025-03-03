#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - prints the second half of a string
 * @str: the string to be printed
 * Return: void
 */
void puts_half(char *str)
{

	int longuer = _strlen(str);

	if (longuer % 2 == 0)
	{
		int paire = longuer / 2;
			while (str[paire])
		{
			_putchar(str[paire]);
			paire++;
		}
	}
	else if (longuer % 2 != 0)
	{
		int n = (longuer + 1) / 2;

		while (str[n])
		{
			_putchar(str[n]);
			n++;
		}
		}
	_putchar('\n');
}
