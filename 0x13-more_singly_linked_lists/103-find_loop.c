#include "lists.h"

/**
 * find_listint_loop - Finds loop in a linked list.
 * @head: Linked list.
 *
 * Return: Address where loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *store;

	while (head)
	{
		store = head;
		if ((store->next) == (head->next)->next)
			return (store);
	}
	return (store);
}
