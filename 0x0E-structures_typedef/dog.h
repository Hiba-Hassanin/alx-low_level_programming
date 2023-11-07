#ifndef DOG_H
#define DOG_H

/**
 * struct dog - contain the dog information
 *
 * @name: the dog name
 * @age: the dog age
 * @owner: their owner name
 *
 * Return: Always 0
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
