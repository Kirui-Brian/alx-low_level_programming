#include "lists.h"

/**
 * listint_len - Length of list.
 * @h: Pointer to struct.
 *
 * Return: Size of list.
 */
size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h != NULL)
	{
		k++;
		h = h->next;
	}
	return (k);
}
