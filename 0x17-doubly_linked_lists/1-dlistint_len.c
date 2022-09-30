#include "lists.h"

/**
 * dlistint_len - counts the number of elements in the linked list
 * @h: head of the list
 * Return: number of items in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t nodes = 0;

    if (!h)
	return (0);

    while (h)
    {
    	nodes++;
	h = h->next;
    }
    
    return (nodes);
    
}
