#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: buff_dog
 */
/* Function to create a new dog */
dog_t *new_dog(char *name, float age, char *owner)
{
    /* Allocate memory for a new dog */
	dog_t *new_dog_ptr = malloc(sizeof(dog_t));

    /* Check if memory allocation was successful */
	if (new_dog_ptr == NULL)
	{
		return (NULL); /* Return NULL if allocation failed */
	}

    /* Allocate memory for name and owner strings */
	new_dog_ptr->name = malloc(strlen(name) + 1);
	new_dog_ptr->owner = malloc(strlen(owner) + 1);

    /* Copy name and owner strings */
	strcpy(new_dog_ptr->name, name);
	strcpy(new_dog_ptr->owner, owner);

    /* Set the age of the new dog */
	new_dog_ptr->age = age;

	return (new_dog_ptr); /* Return a pointer to the new dog */
}
