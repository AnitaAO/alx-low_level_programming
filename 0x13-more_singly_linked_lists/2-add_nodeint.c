#include "lists.h"

/**
 * add_nodeint - adds node to the beginning of a linked list
 * @head: first node pointer
 * @n: data
 * Return: pointer to the new node, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
