#include "main.h"


/**
 * _islower - check if is lower or no.
 *
 * @c : charactere
 *
 * Return: Always 0.
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);
}
