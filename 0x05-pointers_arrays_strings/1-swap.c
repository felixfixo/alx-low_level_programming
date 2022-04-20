#include "holberton.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: 1st integer to be swapped
 * @b: 2nd integer to be swapped
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}