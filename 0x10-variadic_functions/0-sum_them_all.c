#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *sum_them_all - function that returns the sum of all its parameters.
 * If n == 0, returns 0
 *
 *@n: integer parameter
 *Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
va_list li;
int sum = 0;
unsigned int i;

va_start(li, n);

if (n != 0)
{
for (i = 0; i < n; i++)
sum += va_arg(li, int);
}

va_end(li);
return (sum);
}
