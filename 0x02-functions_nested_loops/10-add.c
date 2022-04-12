#include "main.h"
#include <stdio.h>

/**
 * add - adds the int inputs and returns the result.
 *
 * Return: int.
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int n;

n = add(89, 9);
printf("%d\n", n);
return (0);
}
