#include "main.h"

/**
 * print_number - prints integers meeting creteria
 * @n: number use in loop
 *
 * Return: void
 */
void print_number(int n)
{
unsigned int num = n;
if (n < 0)
{
_putchar('-');
num = -num;
}
if (num > 9)
{
print_number(num / 10);
}
_putchar(num % 10 + '0');
}
