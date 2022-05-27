#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - function that reverses a listint_t linked list
 * You are not allowed to use more than 1 loop.
 * You are not allowed to use malloc, free or arrays
 * You can only declare a maximum of two variables in your function
 *
 * @head: double pointer to head of the listint_t linked list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next_node, *what_to_point_to;

	if (!(*head))
	{
	return (NULL);
	}

	what_to_point_to = NULL;
	next_node = (*head)->next;
	(*head)->next = what_to_point_to;
	what_to_point_to = *head;

	while (next_node)
	{
	*head = next_node;
	next_node = (*head)->next;
	(*head)->next = what_to_point_to;
	what_to_point_to = *head;
	}

	return (*head);
}
