#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes.
 * Prototype: char *_strpbrk(char *s, char *accept);
 * The _strpbrk() function locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * Returns a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 * @s: - Character to check
 * @accept: - Character to look for
 *
 * Return: Character
 */

char *_strpbrk(char *s, char *accept)
{
int i, k;

for (i = 0; s[i] != '\0'; i++)
{
for (k = 0; accept[k] != '\0'; k++)
{
if (s[i] == accept[k])
{
return (s + i);
}
}
}
return (0);
}
