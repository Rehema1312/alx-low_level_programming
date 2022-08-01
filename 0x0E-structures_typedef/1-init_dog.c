#include "dog.h"

/**
* init_dog - function that initializes variable of type stuct dog
* @d: dog identification
* @name: name of dog
* @age: age of dog
* @owner: owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
