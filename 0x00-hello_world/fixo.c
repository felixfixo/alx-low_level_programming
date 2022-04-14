#include <stdio.h>
/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
int i;

i = -9;
while (i < 0)
{
    printf("%d", -i);
    i++;
}
	return (0);
}
