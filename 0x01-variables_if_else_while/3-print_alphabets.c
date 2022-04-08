#include <stdio.h>
#include <ctype.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		char capitalLetter = toupper(ch);
	putchar(capitalLetter);
	}
	putchar('\n');
	return (0);
}
