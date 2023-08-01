#include "lists.h"
/**
 * pop_listint - pops out a node from list
 * @head: head address
 * Return: returns
 */
int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *tmp;

	if (*head == NULL)
		return (value);
	tmp = *head;
	value = tmp->n;
	*head = tmp->next;
	free(*head);

	return (value);
}
