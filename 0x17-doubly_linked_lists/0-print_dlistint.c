#include "lists.h"
i
/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the list
 *
 * Return: number of items in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
    size_t node;

    nodes = 0;

    if (h = NULL)
	return (node);

    while (h)
    {
        nodes++;
	printf("%d\n", h->n);
        h = h->next
    }

    return (nodes);
}
