#include "list.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: a point to the address of the head of the list.
 * @n: the integar for the new node to contain.
 *
 * Return: if functions fails - '\0'
 * otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
