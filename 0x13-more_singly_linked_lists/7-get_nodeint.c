#include "lists.h"

/**
 * get_nodeint_at_index - Get node at given index.
 * @head: List.
 * @index: Given index.
 *
 * Return: Node with index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t k = 0;
	listint_t *store = malloc(sizeof(listint_t));

	if (store == NULL)
		return (NULL);
	store = head;
	while (store)
	{
		if (k == index)
			return (store);
		store = store->next;
		k++;
	}
	return (NULL);
}
