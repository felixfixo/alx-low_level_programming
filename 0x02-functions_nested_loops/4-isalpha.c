#include "main.h"
#include <ctype.h>

/**
 * _isalpha - checks if input char is alphabet.
 * @c: The number to be checked
 *
 * Return: int.
 */
int _isalpha(int c)
{
if (isalpha(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
