#include "lists.h"
/**
 * free_listint - This function frees up space
 * @head: head of struct
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;


	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}

}
