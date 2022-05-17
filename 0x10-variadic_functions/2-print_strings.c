#include "variadic_functions.h"
#include <stdarg.h>
#include <varargs.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: separates strings
 * @n: integer parameter
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list params;
char *str;

va_start(params, n);

for (i = 0; i < (n - 1) && n != 0; i++)
{
str = va_arg(params, char *);
if (!separator)
{
printf("%s", str ? str : "(nil)");
}
else
{
printf("%s%s", str ? str : "(nil)", separator);
}
}

if (n)
{
str = va_arg(params, char *);
printf("%s\n", str ? str : "(nil)");
}
else
{
printf("\n");
}

va_end(params);
}
