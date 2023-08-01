#include "lists.h"

/**
 * free_listint_safe - s function Safely frees a linkedlist
 * @h: head of a linked list
 *
 * Return: returns size
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *slow, *fast, *tmp;

	if (h == NULL || *h == NULL)
		return (0);

	slow = *h;
	fast = (*h)->next;

	while (fast != NULL && fast < fast->next)
	{
		tmp = fast->next;
		free(slow);
		count++;

		slow = tmp;
		fast = tmp->next;
	}

	free(slow);
	count++;
	*h = NULL;

	return (count);
}

