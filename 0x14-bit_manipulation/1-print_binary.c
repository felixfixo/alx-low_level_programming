#include "main.h"

/**
 * print_binary - function that prints the binary
 * representation of a number.
 * You are not allowed to use arrays
 * You are not allowed to use malloc
 * You are not allowed to use the % or / operators
 *
 * @n: the decimal
 * Return: void
 */
void print_binary(unsigned long int n)
{
int flag = 0;
unsigned long int number = 1;

number <<= 63;
if (n == 0)
{
_putchar('0');
}

while (number > 0)
{
if ((n & number) == 0 && flag == 1)
{
_putchar('0');
}
if ((n & number) != 0)
{
_putchar('1');
flag = 1;
}

number = number >> 1;
}
}
