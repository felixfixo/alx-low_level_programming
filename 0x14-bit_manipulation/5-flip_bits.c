#include "main.h".

/**
 * flip_bits - function that returns the number of bits
 * you would need to flip to get from one number to another.
 * You are not allowed to use the % or / operators
 *
 * @m: the number to be compared
 * @n: the number
 * Return: the number of different bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int k;

k = 0;
n = n ^ m;

while (n)
{
k += n & 1;
n >>= 1;
}
return (k);
}
