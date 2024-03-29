#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog -  function that initialize a variable of type
 * struct dog
 * @d: the instance of dog struct to initialize
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: no return.
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
