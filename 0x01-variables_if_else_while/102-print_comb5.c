#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	/* Declare variables */
	int x;
	int y;

	for (x = 0; x < 100; x++)
	{
		for (y = 1; y < 100; y++)
		{
			if (x < y)
			{
				/* Print the numbers */
				putchar((x / 10) + '0');
				putchar((x % 10) + '0');
				putchar(' ');
				putchar((y / 10) + '0');
				putchar((y % 10) + '0');
				if (!(x == 98 && y == 99))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
