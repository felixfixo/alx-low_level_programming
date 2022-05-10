#include "main.h"

/**
 * _realloc - program that multiplies two positive numbers.
 * Usage: mul num1 num2
 * num1 and num2 will be passed in base 10
 * Print the result, followed by a new line
 * If the number of arguments is incorrect, print Error,
 * followed by a new line, and exit with a status of 98
 * num1 and num2 should only be composed of digits. If not,
 * print Error, followed by a new line, and exit with a status of 98
 * You are allowed to use more than 5 functions in your file
 *
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *clone, *relloc;
unsigned int i;

if (ptr != NULL)
{
clone = ptr;
}
else
{
 return (malloc(new_size)); 
}
if (new_size == old_size)
{
return (ptr);
}
if (new_size == 0 && ptr != NULL)
{ 
free(ptr);
return (0); 
}
relloc = malloc(new_size);
if (relloc == NULL){
return (0);
}

for (i = 0; i < (old_size || i < new_size); i++)
{
*(relloc + i) = clone[i];
}
free(ptr);
return (relloc);
}
