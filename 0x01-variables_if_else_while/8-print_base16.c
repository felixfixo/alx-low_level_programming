#include <stdio.h>
#include <ctype.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	char base_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7',
        '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

	for (int i = 0; i <  16; i++)
	{
		if(base_digits[i] == 'A' || base_digits[i] == 'B' || base_digits[i] == 'C'
			|| base_digits[i] == 'D' || base_digits[i] == 'E' || base_digits[i] == 'F')
		{
			char lowerCaseLetter = tolower(base_digits[i]);
			putchar(lowerCaseLetter);
		}
		else{
			int hexadecimal =  base_digits[i] % 16;
			putchar(hexadecimal + '0');
		}
		putchar('\n');
	}
	return (0);
}
