#include "main.h"


/**
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
*/

void _puts(char *str)
{
int i = 0;
while (str[i])
{
_putchar(str[i]);
i++;
}
}

/**
 * _atoi - convert a string to an integer.
 * @s: char type string
 * Return: integer converted
 */
int _atoi(const char *s)
{
    int sign = 1;
	unsigned long int resp = 0, firstNum, i;

	for (firstNum = 0; !(s[firstNum] >= 48 && s[firstNum] <= 57); firstNum++)
	{
	if (s[firstNum] == '-')
	{
	sign *= -1;
	}
	}

	for (i = firstNum; s[i] >= 48 && s[i] <= 57; i++)
	{
	resp *= 10;
	resp += (s[i] - 48);
	}

	return (sign * resp);
}

/**
 * print_int - prints an integer.
 * @n: int
 * Return: 0
 */
void print_int(unsigned long int n)
{

unsigned  long int divisor = 1, i, resp;

for (i = 0; n / divisor > 9; i++, divisor *= 10)
;

for (; divisor >= 1; n %= divisor, divisor /= 10)
{
resp = n / divisor;
_putchar('0' + resp);
}
}

/**
 * main - multiplies two positive numbers
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not,
 * print Error, followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 *
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char const *argv[])
{
(void)argc;

if (argc != 3)
{
_puts("Error ");
exit(98);
}
print_int(_atoi(argv[1]) * _atoi(argv[2]));
_putchar('\n');
return (0);
}
