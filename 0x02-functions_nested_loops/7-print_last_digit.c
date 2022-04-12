#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - returns last digit of input int.
 * @n: The number to be checked
 *
 * Return: int.
 */
int print_last_digit(int n)
{
n = n % 10;

    if (n < 0)
        n = -n;
        _putchar(n + '0');
        return (n);
}
