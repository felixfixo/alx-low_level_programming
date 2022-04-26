#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * The _memset() function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * Returns a pointer to the memory area s
 * @s:- Pointer to a memory area
 * @b: - Value that is to fill up memory area @s
 * @n: - number of bytes of memory area @s to be filled with @b
 *
 * Return: Pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
