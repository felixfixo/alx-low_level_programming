#include "main.h"

/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * The _calloc function allocates memory for an array of nmemb elements
 * of size bytes each and returns a pointer to the allocated memory.
 * The memory is set to zero
 * If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 *
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);
	_memset(p, 0, (nmemb * size));
	return (p);
}