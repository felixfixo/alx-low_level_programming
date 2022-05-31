#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - finds the length of a string
 * @s: pointer to the string to be checked
 * Return: integer
*/
int _strlen(const char *s)
{
int i = 0;
while (s[i])
{
i++;
}
return (i);
}


/**
 * binary_to_uint - function that converts a
 * binary number to an unsigned int.
 *
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number,
 * or 0 if there is one or more chars in the
 *string b that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0;
int i, length;

if (b == NULL)
{
return (0);
}

length = _strlen(b);

for (i = 0; i != length; i++)
{
if (b[length - i - 1] == '1')
{
n += 1 << i;
}
else if (b[length - i - 1] != '0')
{
return (0);
}
}

return (n);
}
