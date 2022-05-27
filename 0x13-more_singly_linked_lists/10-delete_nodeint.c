#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at
 * index index of a listint_t linked list.
 * where index is the index of the node that should be deleted.
 * Index starts at 0
 *
 * @head: head of linked list
 * @index: index to delete
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *currentNode;
listint_t *tmp;

if (head == NULL || (*head) == NULL)
return (-1);

currentNode = *head;
if (index == 0)
{
if ((*head)->next)
(*head) = (*head)->next;
else
(*head) = NULL;
free(currentNode);
return (1);
}

while (index != 1)
{
if (currentNode->next == NULL)
return (-1);

currentNode = currentNode->next;
--index;
}
tmp = currentNode->next;
if (currentNode->next->next)
currentNode->next = currentNode->next->next;
else
currentNode->next = NULL;
free(tmp);

return (1);
}
