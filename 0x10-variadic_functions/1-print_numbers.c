#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers -  function that prints numbers, followed by a new line.
 * where separator is the string to be printed between numbers
 * and n is the number of integers passed to the function
 * If separator is NULL, don’t print it
 * Print a new line at the end of your function
 *
 * @separator: separates numbers
 * @n: integer parameter
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int i;

va_start(list, n);

for (i = 0; i < n; i++)
{
printf("%i", va_arg(list, int));
if (i != n - 1 && separator != NULL)
{
printf("%s", separator);
}
}
va_end(list);
putchar('\n');
}
