#include "main.h"
#include <stdio.h>

/**
 * add - prints all natural numbers from n to 98.
 *
 * Return: void.
 */
int print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}

n++;
}
}
else if (n > 98)
{
while (n > 98)
{
if (n != 98)
{
printf("%d, ", n);
}
else
{
printf("%d", n);
}

n--;
}
}
else if (n == 98)
{
printf("%d", n);
}
printf("\n");

}
