#include "main.h"

/**
 * _strstr - function that locates a substring.
 * Prototype: char *_strstr(char *haystack, char *needle);
 * The _strstr() function finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared
 *  Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 * @needle: - Occurance to find
 * @haystack: - String to search
 *
 * Return: Pointer
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack)
{
char *src = haystack;
char *sub = needle;

while (*haystack && *sub && *haystack == *sub)
{
haystack++;
sub++;
}
if (!*sub)
{
return (src);
}
haystack = src + 1;
}
return (0);
}
