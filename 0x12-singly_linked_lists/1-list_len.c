#include "lists.h"
#include <stdio.h>

/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 *
 * @h: the singly-linked list
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
const list_t *currentNode = h;
size_t my_nodes = 0;

while (currentNode != NULL)
{
currentNode = currentNode->next;
my_nodes++;
}
return (my_nodes);
}
