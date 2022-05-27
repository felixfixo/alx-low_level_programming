#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * The function sets the head to NULL
 *
 * @head: head of linked list
 * @Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *currentNode;

	if (head == NULL)
	{
	return;
	}

	while (*head != NULL)
	{
	currentNode = *head;
	*head = (*head)->next;
	free(currentNode);
	}
}
