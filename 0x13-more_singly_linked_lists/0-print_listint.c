#include <stdio.h>
#include "lists.h"

/**
 * print_listint -function that prints all the elements of a listint_t list.
 *
 * @h: linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *currentNode = h;
size_t noOfNodes = 0;

while (currentNode != NULL)
{
printf("%i\n", currentNode->n);
currentNode = currentNode->next;
noOfNodes++;
}
return (noOfNodes);
}
