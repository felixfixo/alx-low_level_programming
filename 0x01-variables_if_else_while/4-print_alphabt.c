#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' || ch != 'q'){
			putchar(ch);
			putchar('\n');
		}
		
	}
	return (0);
}
