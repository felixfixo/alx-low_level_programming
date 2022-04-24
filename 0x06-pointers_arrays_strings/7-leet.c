#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @s: - Pointer to char params
 * Return: *s
 */
char *leet(char *s)
{
int i;
int j;
char l[] = "ol_ea__t";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; l[j] != '\0'; j++)
{
if (s[i] == l[j] || s[i] == (l[j] - 32))
{
s[i] = j + '0';
}
}
}
return (s);
}
