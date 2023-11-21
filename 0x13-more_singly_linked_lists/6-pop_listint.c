#include "lists.h"

/**
 * pop_listint - Delete head node of a list.
 * @head: List.
 *
 * Return: Data in head node.
 */
int pop_listint(listint_t **head)
{
	listint_t store;

	(&store)->n = (*head)->n;
	(*head) = (*head)->next;
	return ((&store)->n);
}
