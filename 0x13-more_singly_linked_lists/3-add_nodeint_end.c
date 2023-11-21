#include "lists.h"

/**
 * add_nodeint_end - Add node at end of list.
 * @head: List.
 * @n: No to add.
 *
 * Return: Appended list.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *hold;

	if (temp == NULL)
		return (NULL);
	hold = *head;

	if (hold == NULL)
	{
		free(temp);
		(*head) = malloc(sizeof(listint_t));
		if ((*head) == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;

	}
	else
	{
		while (hold->next != NULL)
			hold = hold->next;
		temp->n = n;
		temp->next = NULL;
		hold->next = temp;
	}
	return (*head);
}
