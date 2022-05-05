#include <stdio.h>
#include <stdlib.h>
#include "main.h"

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
char *array;
unsigned int index;

if (size == 0)
{
return (NULL);
}
array = malloc(sizeof(char) * size);

if (array == NULL)
{
return (NULL);
}

for (index = 0; index < size; index++)
{
array[index] = c;
}

return (array);
}
