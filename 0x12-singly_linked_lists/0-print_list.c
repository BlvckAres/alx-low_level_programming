#include "lists.h"

/**
  * print_list - prints all elements of a list
  * @h: the pointer to the  list
  * Return: the number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t y;

	for (y = 0; h != NULL; y++)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", 0, "(nil)");
			h = h->next;
		}
	}
	return (y);
}
