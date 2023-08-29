#include "lists.h"

/**
 * pop_listint - deletes head node of a linked list
 * @head: first element pointer in the linked list
 *
 * Return: the data deleted,
 * or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int i;

	if (!head || !*head)
		return (0);

	i = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (i);
}
