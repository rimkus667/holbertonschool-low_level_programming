#include "main.h"

/**
 * create_array - prints
 * @size: the size of the memory to print
 * @c: tab
 * Return: Nothing.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int compteur;
	char *tab;

if (size == 0)
{
	return (NULL);
}
tab = malloc(size * sizeof(*tab));
if (tab == 0)
{
	return (NULL);
}
if (size == 0)
{
	return (NULL);
}
for (compteur = 0; compteur < size; compteur++)
{
	tab[compteur] = c;
}
return (tab);
}
