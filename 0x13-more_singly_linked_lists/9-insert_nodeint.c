#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts
 * a new node at a given position.
 * idx is the index of the list where the new node should be added.
 * Index starts at 0
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 *
 * @head: head of linked list
 * @idx: index to insert the node
 * @n: new node data
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current;
listint_t *new;

if (head == NULL)
{
return (0);
}
new = malloc(sizeof(listint_t));
if (!new)
{
return (0);
}

new->next = NULL;
new->n = n;

if (idx == 0)
{
new->next = *head;
(*head) = new;
return (new);
}

current = *head;

while (idx != 1)
{
current = current->next;
--idx;
if (current == NULL)
{
free(new);
return (NULL);
}
}
new->next = current->next;
current->next = new;

return (new);
}
