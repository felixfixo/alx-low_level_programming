#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that compares two strings.
 * Prototype: int _strcmp(char *s1, char *s2);
 * Your function should work exactly like strcmp
 *
 * @s1 - pointerto char params
 * @s2 - pointer to char params
 * Return: *dest
 */
int _strcmp(char *s1, char *s2)
{
    int diff = 0;
    int i = 0;

    while (s1[i])
    {
        if (s1[i] != s2[i])
        {
            diff = ((s1[i] - '\0') - (s2[i] - '\0'));
            break;
        }
        i++;
    }
    return (diff);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
