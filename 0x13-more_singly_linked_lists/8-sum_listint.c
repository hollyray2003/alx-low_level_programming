#include "lists.h"
/**
 * sum_listint - this function lists the sum of linked list
 * @head: head of linked list
 * Return: Returns sum
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
