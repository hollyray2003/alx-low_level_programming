#include "lists.h"

/**
 * listint_len - determines number of elements in a linked listint_t list.
 *
 * @h: A pointer to the head of the linked list.
 *
 * Return: Returns.
 */
size_t listint_len(const listint_t *h)
{	

	size_t len = 0;
	while (h != NULL)
	{
        len++;
	h = h->next;
}	
return (len);
}




