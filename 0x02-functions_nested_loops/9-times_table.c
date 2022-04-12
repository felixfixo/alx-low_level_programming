#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Void.
 */

void times_table(void)
{
int a, y, value_to_multiply;

for (y = 0; y < 10; y++)
{
for (a = 0; a < 10; a++)
{
value_to_multiply = a * y;
if (a == 0)
{
_putchar(value_to_multiply + '0');
}
else if (value_to_multiply >= 10)
{
_putchar(' ');
_putchar(value_to_multiply / 10 + '0');
_putchar(value_to_multiply % 10 + '0');
}
else
{
_putchar(' ');
_putchar(' ');
_putchar(value_to_multiply + '0');
}
if (a != 9)
{
_putchar(',');
}
}
_putchar('\n');
}
}
