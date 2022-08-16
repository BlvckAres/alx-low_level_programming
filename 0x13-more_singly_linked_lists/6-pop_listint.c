#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: a pointer to the address of the head of the listint_t list.
 *
 * Return: if the linked list is empty - 0.
 * otherwise - the head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	temp = *head;

	if (temp == NULL)
		return (0);
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
