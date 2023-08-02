#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * list_len - function to list elements in a linked list_t list.
 * @h: header
 *
 * Return: Return
 */
size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}

return (count);
}


