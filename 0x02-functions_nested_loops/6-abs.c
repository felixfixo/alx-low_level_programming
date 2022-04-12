#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - print absolute value.
 *
 * Return: int.
 */
int _abs(int)
{
int a;

a = abs(5);
return (a);
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int r;

r = _abs(-1);
printf("%d\n", r);
r = _abs(0);
printf("%d\n", r);
r = _abs(1);
printf("%d\n", r);
r = _abs(-98);
printf("%d\n", r);
return (0);
}
