#include "main.h"
/**
 * _strchr - Locates a character in a string
 * @s: The string to be searched
 * @c: The character to locate
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\n'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (NULL);
}
