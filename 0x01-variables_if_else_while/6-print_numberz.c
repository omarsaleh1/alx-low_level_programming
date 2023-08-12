#include <stdio.h>

/**
* main - Entry point of the program
*
* Description: Prints all single-digit numbers of base 10 starting from 0,
*              followed by a new line. Uses the putchar function only twice.
*
* Return: Always 0 (success)
*/
int main(void)
{
char digit;

for (digit = '0'; digit <= '9'; digit++)
{
putchar(digit);
}

putchar('\n');
return (0);
}
