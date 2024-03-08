#include <stdio.h>
#include <stdlib.h>
/* #include <string.h> */
#include "dog.h"


/**
 * _strcpy - copy the string to the buffer.
 * @src: The pointer
 * @dest: The pointer
 * Return: On success dest.
 */
char *_strcpy(char *dest, char *src)
{
	int l, i;

	l = 0;
	while (src[l] != '\0')
		l++;
	for (i = 0; i <= l; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _strlen - writes the character c to stdout
 * @s: The character count
 * Return: On success l.
 */
int _strlen(char *s)
{
	int l;

	l = 0;
	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: buff_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
/* Function to create a new dog */
{
    /* Allocate memory for a new dog */
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

    /* Check if memory allocation was successful */
	if (new_dog_ptr == NULL)
	{
		return (NULL); /* Return NULL if allocation failed */
	}

    /* Allocate memory for name and owner strings */
	new_dog_ptr->name = malloc(_strlen(name) + 1);
	new_dog_ptr->owner = malloc(_strlen(owner) + 1);

    /* Copy name and owner strings */
	_strcpy(new_dog_ptr->name, name);
	_strcpy(new_dog_ptr->owner, owner);

    /* Set the age of the new dog */
	new_dog_ptr->age = age;

	return (new_dog_ptr); /* Return a pointer to the new dog */
}
