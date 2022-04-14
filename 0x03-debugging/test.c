#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
int i;

i = 9;
while (i--)
{
    printf("%d", i);
}

return (0);
}
