#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: a pointer to the address of the head of the listint_t list.
 * @n: the integar for the new node to hold.
 *
 * Return: If the function fails - NULL
 * otherwise - the address of the new element.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *cursor = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (cursor != NULL)
	{
		while (cursor->next != NULL)
			cursor = last->next;
		cursor->next = new;
	}
	else
		*head = new;
	return (new);
}
