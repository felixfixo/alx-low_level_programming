#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of
 * the string given as a parameter.
 * The _strdup() function returns a pointer to a new string which
 * is a duplicate of the string str. Memory for the new string
 * is obtained with malloc,
 * and can be freed with free.
 * Returns NULL if str = NULL
 * On success, the _strdup function returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 *
 * @str:- Pointer to string
 * Return: - Pointer
 */
char *_strdup(char *str)
{
char *s;
int i = 0, j;

if (!str)
{
return (NULL);
}

while (*(str + i))
{
i++;
}
i++;
s = malloc(sizeof(char) * i);

if (s == NULL)
{
return (NULL);
}

for (j = 0; j <= i; j++)
{
s[j] = str[j];
}
return (s);
}
