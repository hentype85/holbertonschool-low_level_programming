#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 *_strlen - length of string
 *@s: pointer
 *Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;
	return (i);
}
/**
 *_strcpy - copy string
 *@src: source string
 *@dest: destination string
 *Return: pointer
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
/**
 *new_dog - creates a new dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *Return: struct dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	(*d).name = malloc(sizeof(char) * (_strlen(name) + 1));
	(*d).owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if ((*d).name == NULL)
	{
		free(d);
		free((*d).name);
		return (NULL);
	}

	if ((*d).owner == NULL)
	{
		free(d);
		free((*d).owner);
		return (NULL);
	}

	_strcpy((*d).name, name);
	(*d).age = age;
	_strcpy((*d).owner, owner);

	return (d);
}
