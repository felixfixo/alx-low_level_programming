#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * Your program should print the result of the multiplication,
 * followed by a new line
 * You can assume that the two numbers and result of the multiplication
 * can be stored in an integer
 * If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1
 *
 * @argc: int
 * @argv: list
 * Return: 0
 */
int main(int argc, char const *argv[])
{

if (argc != 3)
{
printf("Error\n");
return (1);
}
printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
