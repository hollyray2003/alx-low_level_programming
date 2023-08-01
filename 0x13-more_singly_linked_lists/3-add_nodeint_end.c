#include "lists.h"

/**
 * add_nodeint_end - this Adds node at the end of a listint_t list
 *
 * @head: head pf the node of the linked list
 * @n: The integer value
 *
 * Return: returns struct
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_nodes, *last_nodes;

    if (head == NULL)
        return (NULL);

    new_nodes = malloc(sizeof(listint_t));
    if (new_nodes == NULL)
        return (NULL);

    new_nodes->n = n;
    new_nodes->next = NULL;

    if (*head == NULL)
        *head = new_nodes;
    else
    {
        last_nodes = *head;
        while (last_nodes->next != NULL)
            last_nodes = last_nodes->next;
        last_nodes->next = new_nodes;
    }

    return (new_nodes);
}


