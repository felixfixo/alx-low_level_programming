#include <stdio.h>
#include <stdlib.h>

/**
 * create_array -creates an array of chars,
 * and initializes it with a specific char.
 * Returns NULL if size = 0
 * Returns a pointer to the array, or NULL if it fails
 *
 * @size:- size
 * @c:- constant
 * Return: char pointer
 */
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;

if (size == 0)
{
return (0);
}
p = malloc(sizeof(char) * (size));
if (p == '\0')
{
return (0);
}
for (i = 0; i < size; i++)
{
p[i] = c;
}
return (p);
}
