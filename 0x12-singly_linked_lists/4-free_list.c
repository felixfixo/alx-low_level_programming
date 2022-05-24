#include "lists.h"

/**
 * free_list - function that frees a list_t list
 *
 * @head: the head of the singly linked list
 */
void free_list(list_t *head)
{
list_t *nextNode;
list_t *currentNode;
currentNode = head;

while (currentNode != NULL)
{
nextNode = currentNode->next;
free(currentNode->str);
free(currentNode);
currentNode = nextNode;
}
}
