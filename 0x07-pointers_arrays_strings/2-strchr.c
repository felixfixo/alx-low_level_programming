#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * Prototype: char *_strchr(char *s, char c);
 * Returns a pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 * @s: - The string to check
 * @c: - The character to find
 *
 * Return: Pointer to @s or NULL
 *
 */
char *_strchr(char *s, char c)
{
while (*s)
{
s++;

if (*s == c)
{
return (s);
}
}

return (0);
}
