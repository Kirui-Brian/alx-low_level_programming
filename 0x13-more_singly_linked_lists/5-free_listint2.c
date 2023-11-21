#include "lists.h"

/**
 * free_listint2 - Sets list to NULL.
 * @head: List.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *store;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((store = current) != NULL)
		{
			current = current->next;
			free(store);
		}
		*head = NULL;
	}
}
