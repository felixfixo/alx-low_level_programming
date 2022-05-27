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
listint_t *temp;

if (head == NULL)
{
return;
}
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
