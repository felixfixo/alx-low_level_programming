#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - function that adds a new node
 * at the end of a list_t list.
 * str needs to be duplicated
 * You are allowed to use strdup
 *
 * @head: The character to print
 * @str: string for the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *currentNode;
list_t *newNode;
int c;

currentNode = *head;
while (currentNode && currentNode->next != NULL)
{
currentNode = currentNode->next;
}

for (c = 0; str[c] != '\0'; c++)
	;

newNode = malloc(sizeof(list_t));
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
newNode->len = c;
newNode->next = NULL;

if (currentNode)
{
currentNode->next = newNode;
}
else
{
*head = newNode;
}
return (newNode);
}
