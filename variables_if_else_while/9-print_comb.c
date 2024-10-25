#include <stdio.h>
/* more headers goes there */
/*betty style doc for function main goes there */
/**
* main - prints all possible combinations of single-digit numbers
* Return: Always 0 Success
*/
int main()
{
int i;
for ( i = 0; i <= 9; i++)
if (i < 9)
putchar(" %d ",i);
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return 0;
}
