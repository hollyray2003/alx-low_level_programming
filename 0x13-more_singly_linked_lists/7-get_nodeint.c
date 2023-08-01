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
unsigned int i;

for (i = 0; head != NULL && i < index; i++)
head = head->next;

return (head == NULL || i < index) ? NULL : head;
}


