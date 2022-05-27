#include "lists.h"

/**
 * sum_listint - function that returns the sum of all
 * the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 *
 * @head: head of linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
listint_t *currentNode;
int sum = 0;

if (head == NULL)
{
return (0);
}

currentNode = head;

while (currentNode != NULL)
{
sum += currentNode->n;
currentNode = currentNode->next;
}

return (sum);
}
