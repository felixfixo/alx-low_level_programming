#include "main.h"

/**
 * print_alphabet_x10 - prints letters of the alphabet in lowercase 10 times
 *
 * Return: void.
 */
void print_alphabet_x10(void)
{
    int i = 0;

    while(i < 10)
    {
        char ch;
        
        for(ch = 'a'; ch <= 'z'; ch++)
        {
            _putchar(ch);
        }
        _putchar('\n');
        i++;
    }
}

/**
 * main - Entry point of c language
 *
 * Return: Always 0.
 */
int main(void)
{
print_alphabet_x10();
return (0);
}
