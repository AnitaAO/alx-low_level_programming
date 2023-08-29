#include "lists.h"

/**
 * print_listint - print all the elements of a linked lists
 * @h: linked list of type listint_t
 *
 * Return: nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		printf("%d\n", h->n);
		number++;
		h = h->next;
	}

	return (number);
}
