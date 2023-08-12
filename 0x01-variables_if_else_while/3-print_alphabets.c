#include <stdio.h>
/* More Headers goes here */

/**
 * main - Entry Point
 *
 * Description: This program prints the alphabet in lowercase
 *              and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter;
    char LETTER;

    letter = 'a';
    LETTER = 'A';

    while (letter <= 'z')
    {
        putchar(letter);
        letter++;
    }

    while (LETTER <= 'Z')
    {
        putchar(LETTER);
        LETTER++;
    }

    putchar('\n');

    return (0);
}
