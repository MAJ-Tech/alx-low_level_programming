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

/** FUNCTIONS PROTOTYPE */
void free_dog(dog_t *d);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

void init_dog(struct dog *d, char *name, float age, char *owner);


#endif /** END OF IF */
