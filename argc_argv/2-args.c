#include <stdio.h>
/**
 * main - check
 * @argc: o
 * @argv: p
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
