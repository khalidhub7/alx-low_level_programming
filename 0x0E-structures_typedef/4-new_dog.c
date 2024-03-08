#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: new_dog_ptr
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

	if (new_dog_ptr == NULL)
	{
		return NULL; /* Return NULL if allocation failed */
	}

	new_dog_ptr->name = malloc(strlen(name) + 1);
	new_dog_ptr->owner = malloc(strlen(owner) + 1);

	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
        /* Free memory and return NULL if allocation failed */

		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return NULL;
	}

	strcpy(new_dog_ptr->name, name);
	strcpy(new_dog_ptr->owner, owner);
	new_dog_ptr->age = age;

	return new_dog_ptr;
}
