#include <stdlib.h>
#include "dog.h"

/**
 * _stlen - functions that returns the length of a string
 *
 * @s: string to evaluate
 * Return: returns the length of the string
 */
int _stlen(char *s)
{
	int x;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}

	return (x);
}

/**
 * *_stcpy - function that copies the string pointed to by src
 * @dest: pointer to the buffer in which we copy the string
 *
 * @src: string to be copied
 * Return: returns the pointer to dest
 */
char *_stcpy(char *dest, char *src)
{
	int length, a;

	length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (a = 0; a < length; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 *
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: returns pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int ln1, ln2;

	ln1 = _stlen(name);
	ln2 = _stlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (ln1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (ln2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_stcpy(dog->name, name);
	_stcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
