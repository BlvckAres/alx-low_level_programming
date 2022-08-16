#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the address of
 * the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p, *n;

	p = NULL;
	n = NULL;

	while ((*head)->next != NULL)
	{
		n = (*head)->next;
		(*head)->next = p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
