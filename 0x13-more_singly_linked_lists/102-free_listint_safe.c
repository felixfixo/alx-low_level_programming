#include "lists.h"

/**
 * free_listint_safe - unction that frees a listint_t list.
 * This function can free lists with a loop
 * You should go though the list only once
 * The function sets the head to NULL
 *
 * @h: the head of list
 * Description: this function free a string in a safe mode
 * section header: the header of this function is lists.h)*
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
int p_diff;
size_t i = 0;
listint_t *temp;

if (h == NULL || *h == NULL)
{
return (0);
}
while (*h)
{
p_diff = *h - (*h)->next;
if (p_diff > 0)
{
temp = (*h)->next;
free(*h);
*h = temp;
i++;
}
else
{
free(*h);
*h = NULL;
i++;
break;
}
}
*h = NULL;
return (i);
}
