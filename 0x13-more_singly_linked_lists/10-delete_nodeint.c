#include "lists.h"
/**
 * delete_nodeint_at_index - this function is to delete nodes
 * @head: head of linked list
 * @index: index of deleted node
 * Return: Returns boolean
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *_delete;
	unsigned int count = 0;

	tmp = *head;
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		tmp = tmp->next;
		free(*head);
		*head = tmp;
		return (1);
	}
	else
	{
		while (tmp != NULL && count != index - 1)
		{
			count++;
			tmp = tmp->next;
		}
		if (count != index - 1)
			return (-1);
		_delete = tmp->next;
		tmp->next = tmp->next->next;
		free(_delete);
		return (1);
	}

}
