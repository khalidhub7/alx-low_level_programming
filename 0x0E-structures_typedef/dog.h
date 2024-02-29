#ifndef DOG_H
#define DOG_H

/**
 * struct dog - basic dog info
 * @name: 1st member
 * @age: 2nd member
 * @owner: 3rd member
 * Description: Longer description
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* Prototype: */

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
