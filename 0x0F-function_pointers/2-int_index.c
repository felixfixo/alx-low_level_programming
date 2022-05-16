#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * where size is the number of elements in the array array
 * cmp is a pointer to the function to be used to compare values
 * int_index returns the index of the first element for which the
 * cmp function does not return 0
 * If no element matches, returns -1
 * If size <= 0, returns -1
 *
 * @array: array of integers
 * @size: size of array
 * @cmp: function pointer
 * Return: index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (size < 1 || array == NULL || cmp == NULL)
{
return (-1);
}

for (i = 0; i < size; i++)
{
if (cmp(array[i]))
{
return (i);
}
}

return (-1);
}

