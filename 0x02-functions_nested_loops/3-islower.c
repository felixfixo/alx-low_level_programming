#include "main.h"
#include <ctype.h>

/**
 * _islower - checks if input char is lowercase.
 *
 * Return: int.
 */
int _islower(int c)
{
if (islower(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
