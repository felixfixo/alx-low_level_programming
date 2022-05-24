#include "lists.h"
#include <string.h>

/**
 * *add_node - function that adds a new node at the
 * beginning of a list_t list.
 * str needs to be duplicated
 * You are allowed to use strdup
 *
 * @head: the head of the linked list
 * @str: linked list string element
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
int strLength;
list_t *newNode;

newNode = (list_t *) malloc(sizeof(list_t));

if (newNode == NULL)
{
free(newNode);
return (NULL);
}

newNode->str = strdup(str);
if (newNode->str == NULL)
{
free(newNode);
return (NULL);
}
for (strLength = 0; str[strLength] != '\0';  strLength++)
;

newNode->len = strLength;
newNode->next = *head;
*head = newNode;
return (newNode);
}
