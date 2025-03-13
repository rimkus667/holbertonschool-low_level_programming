#include "main.h"
/**
 * _calloc - Alloue de la mémoire pour un tableau et initialise à zéro.
 * @nmemb: Nombre d'éléments.
 * @size: Taille de chaque élément.
 *
 * Return: Pointeur vers la mémoire allouée ou NULL en cas d'erreur.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a, total;
	char *tab;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	total = (nmemb * size);
	tab = malloc(total);
	if (tab == 0)
	{
		return (NULL);
	}
	for (a = 0; a < total; a++)
	{
		tab[a] = 0;
	}
	return (tab);
}
