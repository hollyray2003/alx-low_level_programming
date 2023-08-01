#include "lists.h"

/**
 * get_nodeint_at_index - this gets the nth node in a linked list.
 *
 * @head: head of a linkedlist.
 * @index: The index of the node, starting at 0.
 *
 * Return: Returns
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *tmp;

	tmp = head;
	while (count != index && tmp != NULL)
	{
		count++;
		tmp = tmp->next;
	}

	if (count != index)
		return (NULL);
	return (tmp);
}


