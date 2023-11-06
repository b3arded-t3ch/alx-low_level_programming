#ifndef __DOG_H_
#define __DOG_H_

/**
 * struct dog - defines a dog
 * @name: name of the dog
 * @age: age of dog
 * @owner: who owns the dog
 *
 * Description:
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
