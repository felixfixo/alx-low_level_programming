#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - returns last digit of input int.
 *
 * Return: int.
 */
int print_last_digit(int);

int print_last_digit(int n)
{
return (n % 10);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

print_last_digit(98);
print_last_digit(0);
r = print_last_digit(-1024);
_putchar('0' + r);
_putchar('\n');
return (0);
}
