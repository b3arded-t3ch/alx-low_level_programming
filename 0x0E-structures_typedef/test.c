#include "dog.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void) {
    // Test 1: Valid input
    dog_t *my_dog = new_dog("Buddy", 3.5, "Alice");
    if (my_dog != NULL) {
        printf("Name: %s, Age: %.1f, Owner: %s\n", my_dog->name, my_dog->age, my_dog->owner);
        free(my_dog->name);
        free(my_dog->owner);
        free(my_dog);
    } else {
        printf("Failed to create a dog.\n");
    }

    // Test 2: Memory allocation failure
    dog_t *invalid_dog = new_dog("Lucky", 2.5, NULL);
    if (invalid_dog == NULL) {
        printf("Memory allocation failed.\n");
    }

    // Test 3: Invalid input
    dog_t *invalid_input_dog = new_dog(NULL, 2.5, "Dave");
    if (invalid_input_dog != NULL) {
        printf("Invalid input, but the dog was created.\n");
        free(invalid_input_dog->name);
        free(invalid_input_dog->owner);
        free(invalid_input_dog);
    }

    return 0;
}

