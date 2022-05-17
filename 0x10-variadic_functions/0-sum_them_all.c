#include "variadic_functions.h"
#include <varargs.h>
#include <stdio.h>

/**
 *sum_them_all - function that returns the sum of all its parameters.
 * If n == 0, returns 0
 *
 *@n: integer parameter
 *Return: integer
*/
int sum_them_all (const unsigned int n, ...)
{
unsigned int i;
int sum = 0;
va_list args;

if (n == 0)
{
return (sum);
}

va_start(args, n);

for (i = 0; i < n; i++).
{
sum += va_arg(args, int);
}

va_end(args);
return (sum);
}
