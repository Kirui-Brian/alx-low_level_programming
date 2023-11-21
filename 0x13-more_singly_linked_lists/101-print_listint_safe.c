#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a linked list.
 * @head: Linked list.
 *
 * Return: No of nodes in list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *store = malloc(sizeof(listint_t));
	size_t k = 0;

	if (store == NULL)
		return (98);
	store = head;
	if (store == NULL)
		return (0);
	
	return (k);
}
