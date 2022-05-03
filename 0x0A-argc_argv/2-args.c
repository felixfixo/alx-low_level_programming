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
int i = 0;

while (argc--)
{
printf("%s\n", argv[i]);
i++;
}

return (0);
}
