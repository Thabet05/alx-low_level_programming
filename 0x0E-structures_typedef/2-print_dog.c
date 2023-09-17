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
		if (d->name == 0)
			printf("(nil)\n");
		else
			printf("Name: %s\n", (*d).name);
		if (d->age == 0)
			printf("0.000000\n");
		else
			printf("Age: %f\n", (*d).name);
		if (d->owner == 0)
			printf("(nil)\n");
		else
			printf("Owner: %s\n", (*d).name);
	}
}
