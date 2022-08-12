#include "lists.h"
#include <string.h>

/**
  * add_node - adds a new node at the beginning of list_t
  * @head: the pointer to the element in the list
  * @str: is a string
  * Return: a address
  */
list_t *add_node(list_t **head, const char *str)
{
	char *alx;
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	alx = stralx(str);
	if (alx == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = alx;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
