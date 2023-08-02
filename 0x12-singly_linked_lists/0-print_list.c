#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - function to Print elements of a linked list
 * @h: pointer to head of the linked list.
 *
 * Return:return
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
