#include "lists.h"

/**
 * reverse_listint - Reverse a list.
 * @head: List.
 *
 * Return: Reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *curr;

	if ((*head) != NULL)
	{
	prev = (*head);
	curr = (*head)->next;
	(*head) = (*head)->next;
	prev->next = NULL;
	while (*head != NULL)
	{
		(*head) = (*head)->next;
		curr->next = prev;
		prev = curr;
		curr = (*head);
	}
	(*head) = prev;
	}
	return (*head);
}
