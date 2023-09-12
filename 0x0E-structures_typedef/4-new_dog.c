#include "dog.h"
#include <stdio.h>
/**
 *
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	struct dog *new_dog(char *name, float age, char *owner)
	{
		d = malloc(sizeof(dog_t));
		if (name == 0 || age <= 0 || owner == 0)
			return (0);
	}
	if (d == 0)
		return (0);
	d->name = strdup(name);
	if (d->name == NULL)
	{
		free(d);
		return NULL;
	}
	d->age = age;
	d->owner = strdup(owner);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d)
		return NULL;
}
return (d);
}
