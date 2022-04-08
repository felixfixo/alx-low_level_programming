#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	int i = 0;
	int z = 1;
	int y = 0;
	int q = 0;

	while (i <= 9)
	{
		// if (y == 8 && z == 9 )
		// {
		// 	break;
		// }
		putchar(y + '0');
		putchar(z + '0');
		putchar(',');
		putchar(' ');
		if (i == 9){
			y = y + 1;
			z = y + 1;
			i = 0;
		}
		else{
			z++;
			i++;
		}
	}
	return (0);
}
