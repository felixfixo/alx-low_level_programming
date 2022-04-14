#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size : size of triangle
 *
 * Return:void
 */
void print_triangle(int size)
{
int i = 1, k;

while (i <= size && size > 0)
{
k = 0;
while (k < size - i)
{
_putchar(' ');
k++;
}
k = 0;
while (k < i)
{
_putchar('#');
k++;
}
_putchar('\n');
i++;
}
if (i == 1)
{
_putchar('\n');
}
}
