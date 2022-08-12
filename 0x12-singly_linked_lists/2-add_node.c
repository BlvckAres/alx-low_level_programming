#include "lists.h"

/**
  * add_node - adds a new node at the beginning of list_t
  * @head: the pointer to the element in the list
  * @str: is a string
  * Return: a address
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t x;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	for (x = 0; new->str[x] != '\0'; x++);
	new->len = x;
	new->next = *head;
	*head = new;
	return (*head);
}
