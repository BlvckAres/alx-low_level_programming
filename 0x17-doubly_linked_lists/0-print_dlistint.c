#include "lists.h"

/**
 * print_dlistint - prints a doubly linked list
 * @h - head of the list
 * Return: number of items in the linked list
 */
size_t print_dlistint(count dlistint_t *h)
{
    size_t i = 0;

    while (h)
    {
        i++;
        printf("%d\n", h->n);
        h = h->next;
    }

    return (i);
}
