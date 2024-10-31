#include "main.h"
/**
* print_square - imprimer des hashtag
*
* @size: nombre de hashtag
*/
void print_square(int size)
{
int hashtag = 0;
int retourn = 0;
if (size <= 0)
{
_putchar('\n');
}
else
{
while (retourn < size)
{
hashtag = 0;
while (hashtag < size)
{
_putchar('#');
hashtag = hashtag + 1;
}
_putchar('\n');
retourn = retourn + 1;
}
}
}
