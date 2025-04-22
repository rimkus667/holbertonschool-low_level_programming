#include <stdlib.h>
#include "dog.h"
/**
 * _strdup - Duplicates a string in new memory
 * @str: String to duplicate
 *
 * Return: Pointer to new string, or NULL if it fails
 */
char *_strcpy(char *destination, char *source)
{
	int i = 0;

	while (source[i] != '\0')
	{
		*(destination + i) = source[i];
		i++;
	}
	*(destination + i) = '\0';
	return (destination);
}

/**
  * _strlen - Function that calculates the length of a character string
  * @str: string
  * Return: Length of string
  */

int _strlen(char *str)
{
	int i = 0;

	while ((*(str + i) != '\0'))
	{
		i++;
	}
	return (i);
}

/**
 * new_dog - create a new dog
 *
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new struct for new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy;
	char *owner_copy;
	int len_name;
	int len_owner;
	dog_t *create_new_dog;

	create_new_dog = malloc(sizeof(dog_t));
	if (create_new_dog == NULL)
	return (NULL);

	if (name == NULL)
	name = "";
	len_name = _strlen(name) + 1;
	name_copy = malloc(len_name);
	if (name_copy == NULL)
	{
		free(create_new_dog);
		return (NULL);
	}
	if (owner == NULL)

	owner = "";
	len_owner = _strlen(owner) + 1;
	owner_copy = malloc(len_owner);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(create_new_dog);
		return (NULL);
	}

	name_copy = _strcpy(name_copy, name);
	owner_copy = _strcpy(owner_copy, owner);

	create_new_dog->name = name_copy;
	create_new_dog->age = age;
	create_new_dog->owner = owner_copy;

	return (create_new_dog);
}
