#include <stdio.h>
#include <stdlib.h>

/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: integer, 0 or 1
 */
int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
{
return (1);
}
i++;
}
return (0);
}

/**
 * main - adds positive numbers.
 * Print the result, followed by a new line
 * If no number is passed to the program,
 * print 0, followed by a new line
 * If one of the number contains symbols that are not digits,
 * print Error, followed by a new line, and return 1
 * You can assume that numbers and the addition of
 * all the numbers can be stored in an int
 *
 * @argc:- int
 * @argv:- list
 * Return: int. 0
 */
int main(int argc, char const *argv[])
{
int sum = 0;
while (--argc)
{
if (isInteger(argv[argc]))
{
printf("Error\n");
return (1);
}
sum += atoi(argv[argc]);
}

printf("%i\n", sum);
return (0);
}
