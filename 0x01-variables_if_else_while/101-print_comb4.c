#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	int a;
	int x;
	int y;

	for (a = 0; a <= 9; a++)
	{
		for (x = 0; x <= 9; x++)
		{
			for (y = 0; y <= 9; y++)
			{
				if (a != x && x != y && a != y && a < x && y > x)
				{
					putchar(a + '0');
					putchar(x + '0');
					putchar(y + '0');
					if (!(a == 7 && x == 8 && y == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
