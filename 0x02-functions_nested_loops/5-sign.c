#include "main.h"

/**
 * print_sign - print sign of int n.
 *
 * Return: int.
 */
int print_sign(int n)
{
if (n > 0)
{
printf("%+, ", n);
return 1;
}
else if ( n == 0)
{
printf("0, 0");
return 0;
}
else if ( n < 0)
{
printf("%+, ", n);
return -1;
}

}

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = print_sign(98);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(0xff);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
r = print_sign(-1);
_putchar(',');
_putchar(' ');
_putchar(r + '0');
_putchar('\n');
return (0);
}
