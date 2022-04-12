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
printf("%d, ");
}
else
{
printf("%d");
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
printf("%d, ");
}
else
{
printf("%d");
}

n--;
}
}
else if (n == 98)
{
printf("%d");
}
printf("\n");

}
