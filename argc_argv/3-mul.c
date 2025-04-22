#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers passed as arguments
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 if successful, 1 if error
 */
int main(int argc, char *argv[])
{
	int number1;
	int number2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	number1 = atoi(argv[1]);
	number2 = atoi(argv[2]);
	printf("%d\n", number1 * number2);
	return (0);
}
