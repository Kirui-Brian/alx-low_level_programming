#include "lists.h"

/**
 * add_nodeint - Add node at beginning of list.
 * @head: Double pointer to struct.
 * @n: No. to add.
 *
 * Return: List with new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->next = *head;
	temp->n = n;
	*head = temp;
	return (*head);
}
