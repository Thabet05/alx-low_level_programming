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
			printf("Name: (nil)");
		else
			printf("%s\n", (*d).name);
		if ((*d).age == 0)
			printf("Age: (nil)");
		else
			printf("%s\n", (*d).name);
		if ((*d).owner == 0)
			printf("Owner: (nil)");
		else
			printf("%s\n", (*d).name);
	}
}
