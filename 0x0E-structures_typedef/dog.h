#ifndef DOG_H
#DEFINE DOG_H
/**
 * struct dog - dog info
 * @name: name
 * @age: dogs age
 * @owner: dogs owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog poppy;
#endif
