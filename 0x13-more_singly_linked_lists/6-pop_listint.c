#include "lists.h"

/**
 * pop_listint - pops out a node from list
 * @head: head address
 * Return: returns
 */

int pop_listint(listint_t **head)
{
       	int number;
	listint_t *temp;
	if (*head == NULL)
		return (0);
	temp = *head;
	*head = (*head)->next;
	number = temp->n;
	free(temp);
	return (number);
}
