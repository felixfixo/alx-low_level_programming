#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints all the elements of a list_t list.
 * If str is NULL, print [0] (nil)
 * You are allowed to use printf
 *
 * @h: the singly linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{  
const list_t *currentNode = h;
size_t my_nodes = 0;

while (currentNode != NULL)
{
printf("[%d] %s\n", currentNode->len,
currentNode->str != NULL ? currentNode->str : "(nil)");
currentNode = currentNode->next;
my_nodes++;
}
return (my_nodes);
}
