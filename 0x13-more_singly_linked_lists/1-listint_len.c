#include "lists.h"

/**
 * listint_len - returns n elements in a linked lists
 * @h: linked list of type listint_t that traverse
 *
 * Return: number of nodes
 *
 */
size_t listint_len(const listint_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
