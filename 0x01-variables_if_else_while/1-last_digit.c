#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main entry point of execution in C
 *
 * Return: Return zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = n % 10;
	printf("n is %d last digit is %d", n);
	return (0);
}