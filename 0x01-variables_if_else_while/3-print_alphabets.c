#include <stdio.h>
/* More Headers goes here */
/**
* (Main) Enty Point *
* Description : This program is print the alphabet in lowercase then in uppercase *
* Return Always 0 Success *
**/
int main() {
char letter;
char LETTER;
letter = 'a';
LETTER = 'A';
while (letter <= 'z') {
putchar(letter);
letter++;
}
while (LETTER <= 'Z') {
putchar(LETTER);
LETTER++;
}
putchar('\n');
return 0;
}
