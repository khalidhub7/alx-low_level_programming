#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: variable to initialize
 * @name: name
 * @age: age
 * @owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
