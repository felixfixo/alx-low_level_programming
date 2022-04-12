#include "main.h"

/**
 * print_alphabet - prints letters of the alphabet in lowercase
 *
 * Return: void.
 */
void print_alphabet(void){
    char ch;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        _putchar(ch);
    }
    _putchar('\n');
}

/**
 * main - Entry point of c language
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}