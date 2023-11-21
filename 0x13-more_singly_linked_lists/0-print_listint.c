#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print all elements in a list.
 * @h: Pointer to list.
 *
 * Return: Number of elements.
 */
size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		k++;
		h = h->next;
	}
	return (k);
}
