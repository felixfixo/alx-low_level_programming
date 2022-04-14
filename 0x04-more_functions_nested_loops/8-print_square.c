#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @n : used in loop
 *
 * Return: void
 */
void print_square(int n)
{
int i = 0, x;

while (i < n && n > 0)
{
x = 0;
while (x < n)
{
_putchar('#');
x++;
}
_putchar('\n');
i++;
}
if (i == 0)
{
_putchar('\n');
}
}
