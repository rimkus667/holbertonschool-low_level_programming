#include "main.h"
/**
 * _isalpha - check the code.
 * @c : cc
 * Return: Always 0.
 */
int _isalpha(int c)
{
int is_lower = (c >= 'a' && c <= 'z');
int is_upper = (c >= 'A' && c <= 'Z');
if (is_lower || is_upper)
{
return (1);
}
return (0);
}
