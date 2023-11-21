#include "lists.h"

/**
 * sum_listint - List sum of data in list.
 * @head: List.
 *
 * Return:  Sum.
 */
int sum_listint(listint_t *head)
{
	int k = 0;
	listint_t *store = malloc(sizeof(listint_t));

	if (store == NULL)
		EXIT_FAILURE;
	store = head;
	if (store == NULL)
		return (0);
	while (store->next != NULL)
	{
		k += store->n;
		store = store->next;
	}
	k += store->n;
	return (k);
}
