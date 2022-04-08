#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	int number = 0;

	while (number < 16)
	{
		int hexadecimal =  number % 16;
		putchar('%x'+hexadecimal);
		putchar('\n');
		number++;
	}
	return (0);
}
