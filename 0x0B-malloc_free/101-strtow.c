#include <stdlib.h>
#include "main.h"

/**
 * performMoreOperations - performs further operations
 * in strtow function
 * @str: - Pointer to string params
 * @len: - length
 * @f: - Pointer to string params
 * @count: - used in loop
 * @k: - used in loop
 * @j: - used in loop
 * Return: - char
 */
char **performMoreOperations(char *str, int len, char **f,
	int count, int j, int k)
{
char *col;
while (*str)
{
while (*str == ' ' && *str)
{
	str++;
}
len = 0;

while (*(str + len) != ' ' && *(str + len))
{
len += 1;
}
len += 1;
col = malloc(sizeof(char) * len);

if (!col)
{
for (k = j - 1; k >= 0; k--)
{
free(f[k]);
}
free(f);
return (NULL);
}

for (k = 0; k < (len - 1);  k++)
{
*(col + k) = *(str++);
}
*(col + k) = '\0';
*(f + j) = col;

if (j < (count - 1))
{
j++;
}
}
*(f + j) = NULL;
return (f);
}

/**
 * strtow - function that splits a string into words.
 * The function returns a pointer to an array of strings (words)
 * Each element of this array should contain a single word,
 * null-terminated
 * The last element of the returned array should be NULL
 * Words are separated by spaces
 * Returns NULL if str == NULL or str == ""
 * If your function fails, it should return NULL
 *
 * @str: - Pointer to string params
 * Return: - char
 */
char **strtow(char *str)
{
int i = 0, j = 0, k = 0;
int len = 0, count = 0;
char **f;

if (!str || !*str)
{
return (NULL);
}

while (*(str + i))
{
if (*(str + i) != ' ')
{
if (*(str + i + 1) == ' ' || *(str + i + 1) == 0)
{
count += 1;
}
}
i++;
}

if (count == 0)
{
return (NULL);
}
count += 1;
f = malloc(sizeof(char *) * count);

if (!f)
{
return (NULL);
}
i = 0;

performMoreOperations(str, len, f,
	count, j, k);
return (f);
}
