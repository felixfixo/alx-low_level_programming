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
return (1);
}
else if (n == 0)
{
printf("0, 0");
return (0);
}
else if (n < 0)
{
printf("%+, ", n);
return (-1);
}

}
