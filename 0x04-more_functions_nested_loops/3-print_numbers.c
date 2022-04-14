#include "main.h"

/**
 * print_numbers - rints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Return: int, the numbers 0 - 9
 */

void print_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}