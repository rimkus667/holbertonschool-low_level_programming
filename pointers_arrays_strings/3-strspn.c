#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The main string to scan.
 * @accept: The string containing the characters to match in s.
 *
 * Return: The number of bytes in the initial segment of s
 *         consisting only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int count = 0;

	for (a = 0; s[a]; a++)
	{
		for (b = 0; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				count++;
				break;
			}
		}
			if (accept[b] == '\0')
			{
				break;
			}
	}
	return (count);
}
