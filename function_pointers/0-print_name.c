#include "function_pointers.h"
/**
 * print_name - Calls a function to print a name.
 * @name: The name to print.
 * @f: Pointer to the function that will print the name.
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
