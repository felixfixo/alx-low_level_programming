#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}
	putchar('\n');
	return (0);
}
