#include "lists.h"

/**
 * add_nodeint -  adds a new node at the beginning of a listint_t list
 * @head: a point to the address of the head of the list.
 * @n: the integar for the new node to contain.
 *
 * Return: if functions fails - NULL.
 * otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_no;

	new = malloc(sizeof(listint_t));
	if (new_no != NULL)
	{
		new_no->n = n;
		new_no->next = *head;
	}
	else
		return (NULL);

	if (*head != NULL)
		new_no->next = *head;
	*head = new_no;

	return (new_no);
}
