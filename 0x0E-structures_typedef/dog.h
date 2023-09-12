<<<<<<< HEAD
#include <stdio.h>
/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 */
struct dog
=======
#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the structure of a dog
 * @name: the name of the dog
 * @age: the ageof the dog
 * @owner: the owner of the dog
 */
typedef struct dog
>>>>>>> b9cd24e6346c2cb6411bd16b7ee24d8b9d88d28b
{
	char *name;
	float age;
	char *owner;
} dog_t ;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
