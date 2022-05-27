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
size_t len = 0;
int diff;
listint_t *temp;

if (!h || !*h)
{
return (0);
}

while (*h)
{
diff = *h - (*h)->next;
if (diff > 0)
{
temp = (*h)->next;
*h = temp;
len++;
}
else
{
*h = NULL;
len++;
break;
}
}

*h = NULL;
return (len);
}
