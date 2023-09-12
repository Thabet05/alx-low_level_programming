#ifndef DOG_H
#define DOG_H
// The contents of the dog.h file go here
/**
 * struct dog - the structure of a dog
 * @name: the name of the dog
 * @age: the ageof the dog
 * @owner: the owner of the dog
 * Description: dog structure
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t ;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif//DOG_H
