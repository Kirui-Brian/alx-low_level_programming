#include "lists.h"

/**
 * free_listint - Free memory allocated for list.
 * @head: List.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *store;

	while ((store = head) != NULL)
	{
		head = head->next;
		free(store);
	}
}
