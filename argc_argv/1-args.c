#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Argument count (includes the program name)
 * @argv: Argument vector (not used in this program)
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
