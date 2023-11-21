#include "lists.h"

/**
 * free_listint_safe - Free a list.
 * @h: List.
 *
 * Return: Size of freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t k = 0;
	listint_t *store = malloc(sizeof(listint_t));

	if (store == NULL)
		EXIT_FAILURE;
	store = (*h);
	if (store == NULL)
	{
		free(store);
		return (0);
	}
	while (store->next != NULL)
	{
		store = store->next;
		k++;
	}
	return (k++);
}
