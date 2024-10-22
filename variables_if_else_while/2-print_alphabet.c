#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/*betty style doc for function main goes there */
/**
* main - prints the alphabet in lowercase
*
* Return: Always 0 Success
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
}
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');
return (0);
}
