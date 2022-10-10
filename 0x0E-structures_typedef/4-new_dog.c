#include "dog.h"
#include<stdlib.h>
/**
 * new_dog - new
 * @name: name
 * @age: age
 * @owner: owner n
 * Return; ret
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0;, j = 0, k;
	dog_t alice;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	alice = malloc(sizeof(alice));
	if (alice == NULL)
	{
		free(alice);
		return (NULL);
	}
	alice->name = malloc(i * sizeof(alice->name));
	if (alice->name == NULL)
	{
		free(alice->name);
		free(alice);
		return (NULL);
	}
	for (k =0; k <= i; k++)
		alice->name[k] = name[k];
	alice->age = age;
	alice->owner = malloc(j * sizeof(alice->owner));
	if (alice->owner == NULL)
	{
		free(alice->owner);
		free(alice->name);
		free(alice);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		alice->owner[k] = owner[k];
	return (alice);
}
