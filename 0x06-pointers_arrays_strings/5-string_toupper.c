#include "holberton.h"
#include <stdio.h>

/**
 * string_toupper - Function that changes all lowercase letters
 * of a string to uppercase.
 * Prototype: char *string_toupper(char *);
 * @s: - Pointer to char params
 *
 * Return: *s
 */
char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
}
}
return (s);
}



/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}

