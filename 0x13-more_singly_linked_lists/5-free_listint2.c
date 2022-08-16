#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: a pointer to the address of the head of the listint_t list.
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head)
	{
		temp = (*head);
		*head = (*head)->next;
		free(temp);
	}
	head = NULL;
}
