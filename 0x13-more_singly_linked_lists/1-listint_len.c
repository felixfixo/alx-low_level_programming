#include <stdio.h>
#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked listint_t list
 *
 * @h: linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t noOfElements = 0;
	const listint_t *currentNode = h;

	while (currentNode != NULL)
	{
		currentNode = currentNode->next;
		noOfElements++;
	}
	return (noOfElements);
}
