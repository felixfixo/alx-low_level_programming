#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	int number = 0;

	char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	for (int i = 0; i <  16; i++)
	{
		int hexadecimal =  base_digits[i] % 16;
		putchar(hexadecimal);
		putchar('\n');
		number++;
	}
	return (0);
}
