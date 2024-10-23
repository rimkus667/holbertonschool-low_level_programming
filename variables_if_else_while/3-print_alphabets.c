#include <stdio.h>
/* more headers goes there */
/*betty style doc for function main goes there */
/**
* main - prints the alphabet in lowercase, and then in uppercase
*
* Return: Always 0 Success
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
