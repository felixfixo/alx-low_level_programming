#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * All arguments should be printed, including the first one
 * Only print one argument per line, ending with a new line
 * @argc: int
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

if (argc > 1)
{
int count;

for (count = 1; count < argc; count++)
{
printf("%s\n", argv[count]);
}
}
}
