#include "dog.h"
#include <stdio.h>
/**
 * print_dog- a function that prints a struct dog
 * @d: pointer to a struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if ((*d).name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		if ((*d).age == 0)
			printf("Age: (nil)\n");
		else
			printf("Age: %s\n", (*d).name);
		if ((*d).owner == 0)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", (*d).name);
	}
}
