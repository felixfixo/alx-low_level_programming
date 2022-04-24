#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * Prototype: void reverse_array(int *a, int n);
 * Where n is the number of elements of the array
 *
 * @a: - Pointer to int params
 * @n: - Pointer to int params
 * Return: no
 */
void reverse_array(int *a, int n)
{
int i;
int j;
int tmp;

i = 0;
j = n - 1;

while (i < j)
{
tmp = a[i];
a[i] = a[j];
a[j] = tmp;
i++;
j--;
}
}
