#include "dog.h"
/**
 * init_dog - enter dog
 * @d: poi ter to structure
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
