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

typedef struct dog dog_t;

void print_dog(struct dog *d);

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /** END OF IF */
