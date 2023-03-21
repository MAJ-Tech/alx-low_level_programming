#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - A  function that initialize a variable of type struct dog.
 * @d: struct of type dog.
 * @name: string dog name.
 * @age: Dog age.
 * @owner: owner's name.
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
