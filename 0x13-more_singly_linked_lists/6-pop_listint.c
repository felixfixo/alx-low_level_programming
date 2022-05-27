#include "lists.h"

/**
 * pop_listint - function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n)
 * if the linked list is empty return 0
 *
 * @head: head of linked list
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
listint_t *currentNode;
int v;

if (head == NULL)
{
return (0);
}

currentNode = *head;
if (currentNode == NULL)
{
return (0);
}

v = currentNode->n;
*head = currentNode->next;
free(currentNode);
return (v);
}
