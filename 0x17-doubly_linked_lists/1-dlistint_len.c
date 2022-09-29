#include "lists.h"

/**
 * dlistint_len - counts the number of elements in the linked list
 * @h: head of the list
 * Return: number of items in the linked list
 */

size_t dlistint_len(count dlistint_t *h)
{
    size_t i;

    for (i = 0; h; i++)
            h = h->next;
    return (i);
}
