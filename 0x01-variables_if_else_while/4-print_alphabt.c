#include <stdio.h>
/* more headers goes here */
/**
  Main : Entry point of function
* Description : these program for printing lowercase alphabet without 'e' and 'q'*
* Return always 0 success
**/
int main() {
char letter;
letter = 'a';
while (letter <= 'z') {
if (letter != 'e' && letter != 'q') {
putchar(letter);
}
letter++;
}
putchar('\n');
return(0);
}
