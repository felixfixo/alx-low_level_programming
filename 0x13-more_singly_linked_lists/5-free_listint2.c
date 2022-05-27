#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * The function sets the head to NULL
 *
 * @head: head of linked list
 * @Return: nothing
 */
void free_listint2(listint_t **head)
{
listint_t *tmp;

if (head == NULL || *head == NULL)
{
return;
}
while (*head)
{
tmp = *head;
*head = (*head)->next;
free(tmp);
}
*head = NULL;
}
