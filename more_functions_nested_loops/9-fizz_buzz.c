#include <stdio.h>
/**
 * main - Imprimme de 0 a 100 avec conditions
 * Description : mettre Fizz, Buzz et FizzBuzz
 * Return: 0
 */
int main(void)
{
int num;
for (num = 1; num <= 100; num++)
{
if (num % 3 == 0)
{
printf("Fizz ");
}
if (num % 5 == 0)
{
printf("Buzz ");
}
else if (num % 3 == 0 && num % 5 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", num);
}
}
return 0;
}
