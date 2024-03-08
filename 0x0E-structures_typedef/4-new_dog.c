#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/* Function to create a new dog */
dog_t *new_dog(char *name, float age, char *owner) {
    // Allocate memory for a new dog
    dog_t *new_dog_ptr = malloc(sizeof(dog_t));
    
    // Check if memory allocation was successful
    if (new_dog_ptr == NULL) {
        return NULL; // Return NULL if allocation failed
    }
    
    // Allocate memory for name and owner strings
    new_dog_ptr->name = malloc(strlen(name) + 1);
    new_dog_ptr->owner = malloc(strlen(owner) + 1);
    
    // Check if memory allocation for name and owner strings was successful
    if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL) {
        // Free previously allocated memory
        free(new_dog_ptr);
        free(new_dog_ptr->name);
        free(new_dog_ptr->owner);
        return NULL; // Return NULL if allocation failed
    }
    
    // Copy name and owner strings
    strcpy(new_dog_ptr->name, name);
    strcpy(new_dog_ptr->owner, owner);
    
    // Set the age of the new dog
    new_dog_ptr->age = age;
    
    return new_dog_ptr; // Return a pointer to the new dog
}

int main() {
    // Example usage of new_dog function
    dog_t *my_dog = new_dog("Buddy", 3.5, "John");
    if (my_dog == NULL) {
        printf("Failed to create a new dog.\n");
    } else {
        printf("New dog created: %s, %.1f years old, owned by %s\n", my_dog->name, my_dog->age, my_dog->owner);
    }

    // Remember to free memory allocated for the dog
    free(my_dog->name);
    free(my_dog->owner);
    free(my_dog);
    
    return 0;
}
