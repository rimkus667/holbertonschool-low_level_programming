#include <stdio.h>
/* more headers goes there */
/*betty style doc for function main goes there */
/**  
* main - prints the alphabet in lowercase, and then in lowercase  
* 
* Return: Always 0 Success  
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
if (letter != "q" && letter !="e")
putchar(letter);
}
putchar('\n');
return (0);
}
