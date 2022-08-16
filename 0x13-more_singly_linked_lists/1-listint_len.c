#include "lists.h"
#include <stdio.h>

/**
 * listint_len - counts the number of elements in a linked listint_t list
 * @h: a pointer to the head of the listint list.
 *
 * Return: number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t nodes = 0;

	while (cursor != NULL)
	{
		nodes += 1;
		cursor = cursor->next;
	}
	return (nodes);
}
