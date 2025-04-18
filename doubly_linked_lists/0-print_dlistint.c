#include "lists.h"
/**
 * print_dlistint - Prints all elements of a dlistint_t list
 * @h: Pointer to the head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t data = 0;

	if (!h)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		data++;
	}

	return (data);
}
