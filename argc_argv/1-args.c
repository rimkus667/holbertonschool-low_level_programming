#include <stdio.h>
/**
 * main - check
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings representing the arguments passed
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}