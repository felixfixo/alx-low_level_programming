#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n : number to be used in while loop
 * Return: void
 */
void print_line(int n)
{
int i = 0;

while (i < n && n > 0)
{
_putchar('_');
i++;
}
_putchar('\n');
}
