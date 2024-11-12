#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: k
 * @argv: lo
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int panda, chat;
if (argc != 3)
{
printf("Error\n");
return (1);
}
panda = atoi(argv[1]);
chat  = atoi(argv[2]);
printf("%d\n", panda *chat);
return (0);
}
