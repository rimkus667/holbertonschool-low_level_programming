#include <stdio.h>
/* more headers goes there */
/*betty style doc for function main goes there */
/**
* main - print the last digit of the number stored in the variable n
*
* Return: Always 0 Success
*/
int main(void)
{
int n;
for (n =0; n <= 9; n++)
putchar(n + '0');
putchar('\n');
return (0);
}
