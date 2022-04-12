#include "main.h"
#include <stdio.h>

/**
 * add - prints all natural numbers from n to 98.
 *
 * Return: void.
 */
void print_to_98(int n);

int print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
if (n != 98)
{
printf("%d, "); 
}
else
{
printf("%d");
}

n++;
}
}
else if (n > 98)
{
while (n > 98)
{
if (n != 98)
{
printf("%d, "); 
}
else
{
printf("%d");
}

n--;
}  
}
else if (n == 98)
{
printf("%d");
}
printf("\n");

}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
print_to_98(0);
print_to_98(98);
print_to_98(111);
print_to_98(81);
print_to_98(-10);
return (0);
}