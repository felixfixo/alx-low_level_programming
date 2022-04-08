#include <stdio.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	for(char ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar("\n");
	}
	return (0);
}
