#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the
 * nth node of a listint_t linked list.
 * where index is the index of the node, starting at 0
 *
 * @head: head of linked list
 * @index: node index to return
 * Return: node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *currentNoede;

if (head == NULL)
{
return (0);
}

currentNoede = head;

while (index != 0)
{
currentNoede = currentNoede->next;
index--;
if (currentNoede == NULL)
{
return (0);
}
}

return (currentNoede);
}
