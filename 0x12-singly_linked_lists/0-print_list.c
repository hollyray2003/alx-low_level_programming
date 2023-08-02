#include <stdio.h>
#include "lists.h"

/**
 * print_list - This function Prints the elements of a list_t list.
 * @h: Header.
 *
 * Return: Return
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str != NULL ? h->str : "(nil)");
		h = h->next;
		count++;
	}
	return (count);
}
