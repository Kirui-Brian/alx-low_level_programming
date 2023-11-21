#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at index.
 * @head : List.
 * @idx: Index.
 * @n: No. to insert.
 *
 * Return: New list with node inserted.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *mpya;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	mpya = malloc(sizeof(listint_t));
	if (mpya == NULL)
		return (NULL);

	mpya->n = n;

	if (idx == 0)
	{
		mpya->next = *head;
		*head = mpya;
	}
	else
	{
		mpya->next = h->next;
		h->next = mpya;
	}

	return (mpya);
}
