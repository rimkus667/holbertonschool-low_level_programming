#include "main.h"
/**
 * _strstr - Locates a substring in a string
 * @haystack: The main string to search in
 * @needle: The substring to find
 *
 * Return: Pointer to the beginning of the located substring,
 *         or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a]; a++)
	{
		for (b = 0; needle[b]; b++)
		{
			if (haystack[a + b] != needle[b])
			{
				break;
			}
			if (needle[b] != '\0')
			{
				return (haystack + a);
			}
		}
	}
	return (NULL);
}
