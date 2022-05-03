#include <stdio.h>
#include <stdlib.h>
/**
 * isInteger - checks if s is an integer
 * @s: string to check
 * Return: integer, 0 or 1
 */
int isInteger(const char *s)
{
int i = 0;
while (s[i] != '\0')
{
if (s[i] < '0' || s[i] > '9')
{
return (0);
}
i++;
}
return (1);
}

/**
 * main - prints the minimum number of coins to make
 * change for an amount of money.
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * You should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0, followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{
int i = 0, coinUsed = 0, coin = 0;
int coins[] = {25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}

if (isInteger(argv[1]))
{
i = atoi(argv[1]);
while (i > 0 && coin <= 4)
{
if (i >= coins[coin])
{
i -= coins[coin];
coinUsed++;
}
else
{
coin++;
}
}
}

printf("%i\n", coinUsed);
return (0);
}
