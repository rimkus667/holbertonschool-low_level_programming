#include "main.h"
/**
 * _atoi - check the code
 * _putchar - cek
 * @s : soso
 * @c coco
 * Return: Always 0.
 */
int _atoi(char *s)
{
int _putchar(char c);
int i = 0;
int sign = 1;
int result = 0;
while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
{
if (s[i] == '-')
sign *= -1;
i++;
}
while (s[i] >= '0' && s[i] <= '9')
{
if (result > (2147483647 - (s[i] - '0')) / 10)
return (sign == 1 ? 2147483647 : -2147483648);
result = result * 10 + (s[i] - '0');
i++;
}
return (result *sign);
}
