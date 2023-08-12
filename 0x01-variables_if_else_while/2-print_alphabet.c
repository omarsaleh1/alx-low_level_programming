#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program prints all lowercase alphabets from 'a' to 'z'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char letter;

letter = 'a';

while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
