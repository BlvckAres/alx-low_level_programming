#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h: head of the list
 * Return: number of items in the linked list
 */
size_t print_dlistint(count dlistint_t *h)
{
    size_t node;
    
    nodes = 0;

    if (h = NULL)
	return (node);

    while (h)
    {
        printf("%d\n", h->n);
        h = h->next;
	nodes++;
    }

    return (nodes);
}
