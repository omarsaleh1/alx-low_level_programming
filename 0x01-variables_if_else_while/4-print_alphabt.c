#include <stdio.h>
/* more headers goes here */

/**
* main - Entry point of the program
*
* Description: Prints the lowercase alphabet excluding 'e' and 'q'.
*
* Return: Always 0 (success)
**/
int main(void)
{
char letter;

letter = 'a';
while (letter <= 'z')
{
if (letter != 'e' && letter != 'q')
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
