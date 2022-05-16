#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function given as
 * a parameter on each element of an array.
 * where size is the size of the array
 * and action is a pointer to the function you need to use
 *
 * @array: array of intege
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;

if (array != NULL && action != NULL)
{
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
}
