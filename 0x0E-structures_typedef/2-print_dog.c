#include "dog.h"
#include <stdio.h>
/**
 * print_dog - function that prints a struct dog
 * @d: struct dog to print
*/
void print_dog(struct dog *d)
{
    if (d == NULL)
        return;
    if (d->name = NULL)
        d->name = "(nil)";
    if (d->owner = NULL)
        d->owner = "(nil)";
    printf("Name: %s\nAge: %d\nOwner: %s", d->name, d->name, d->owner);
}
