#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node
 * at the end of a listint_t list.
 *
 * @n: string for the new node
 * @head: The character to print
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current;
listint_t *new_node;

current = *head;
while (current && current->next != NULL)
{
current = current->next;
}

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;

if (current)
{
current->next = new_node;
}
else
{
*head = new_node;
}
return (new_node);
}
