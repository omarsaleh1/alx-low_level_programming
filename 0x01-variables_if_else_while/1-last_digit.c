#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Description: This program generates a random number, computes its last digit,
* and prints information about the last digit.
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int lastdigit;  /* Declare the variable at the beginning of the block */

srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;  /* Initialize the variable */

printf("Last digit of %d is %d ", n, lastdigit);

if (lastdigit > 5)
{
printf("and is greater than 5\n");
}
else if (lastdigit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}

/* your code goes there */
return (0);
}
