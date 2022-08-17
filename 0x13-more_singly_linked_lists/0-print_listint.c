#include "lists.h"

/**
 * print_listint - a function that prints all the elements of a listint_t list.
 * @h: a pointer to the head of nodes in the list_t list.
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t nodes = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		nodes += 1;
		cursor = cursor->next;
	}
	return (nodes);
}
