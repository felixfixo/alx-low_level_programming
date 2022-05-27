#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *currentNode;
	listint_t *nextNode;

	currentNode = head;

	while (currentNode != NULL)
	{
	nextNode = currentNode->nextNode;
	free(currentNode);
	currentNode = nextNode;
	}
}
