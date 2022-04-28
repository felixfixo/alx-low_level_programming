#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - function that returns 1 if the input integer is
 * a prime number, otherwise return 0
 * @n: integer
 *
 * Return: integer
 */
int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: - integer
 * @resp: - integer
 * Return: - integer
 */
int check_prime(int n, int resp)
{

if (resp >= n && n > 1)
{
return (1);
}
else if (n % resp == 0 || n <= 1)
{
return (0);
}
else
{
return (check_prime(n, resp + 1));
}
}
