#include "main.h"
#include <stdlib.h>
/**
 * str_concat - check the code
 * @s1 : var
 * @s2 : var
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
char *chaine;
int compteur1 = 0;
int compteur2 = 0;
int i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
for (; s1[compteur1] != '\0'; compteur1++)
;
for (; s2[compteur2] != '\0'; compteur2++)
;
chaine = (char *)malloc(compteur1 + compteur2 + 1);
if (chaine == NULL)
{
return (NULL);
}
for (i = 0; i < compteur1; i++)
chaine[i] = s1[i];
for (i = 0; i < compteur2; i++)
chaine[compteur1 + i] = s2[i];
chaine[compteur1 + compteur2] = '\0';
return (chaine);
}
