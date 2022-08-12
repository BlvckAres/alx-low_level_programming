#include "lists.h"

/**
  * list_len - returns the number of elements in a linked list
  * @h: the pointer to an element in the list.
  * Return: a number
  */
size_t list_len(const list_t *h)
{
	size_t y;

	for (y = 0; h != NULL; y++)
		h = h->next;
	return (y);
}
