#include "variadic_functions.h"
#include <varargs.h>
#include <stdio.h>

/**
 *sum_them_all - function that returns the sum of all its parameters.
 * If n == 0, returns 0
 *
 *@n: integer parameter
 *Return: sum of parameters
*/
int sum_them_all (const unsigned int n, ...)
{
va_list ap;
int i, sum = 0;

va_start(ap, n); 

for (i = n; i >= 0; i = va_arg(ap, int))
{
sum = sum + i;
}
va_end(ap);
return sum;
}

