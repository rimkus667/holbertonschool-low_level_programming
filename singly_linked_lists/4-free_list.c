#include "lists.h"

/**
 * free_list - Libère toute la mémoire allou
 * @head: Pointeur vers le premier de la liste
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
