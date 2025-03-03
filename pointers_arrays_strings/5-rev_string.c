#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: void
 */
void rev_string(char *s)
{
	int a, b;
	char c;

	for (a = 0; s[a] != '\0'; a++)
;
b = a - 1;
	for (a = 0; a < b; b--)
{
c = s[a];
	s[a] = s[b];
s[b] = c;
	a++;
}
}

