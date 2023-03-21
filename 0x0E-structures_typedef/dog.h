#ifndef DOH_H
#define DOH_H
/**
 * struct dog - Define new type dog.
 * @name: string name.
 * @age: float age.
 * @owner: owner's name.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif /** END OF IF */
