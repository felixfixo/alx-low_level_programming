#include "main.h"
#include <stdio.h>

/**
 * print_sign - print sign of int n.
 * @n: The number to be checked
 *
 * Return: int.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else if (n < 0)
{
_putchar('-');
return (-1);
}
return (0);
}
