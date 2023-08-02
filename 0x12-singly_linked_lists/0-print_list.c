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
size_t count = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
count++;
}
return (count);
}
