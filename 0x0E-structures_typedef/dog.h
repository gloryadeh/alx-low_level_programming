#ifndef MACRO_H
#define MACRO_H

/**
 * struct dog - Dog info
 * @name: name of dog
 * @age: dog's age
 * @owner: owner of dog
 *
 * Description: Structure with dog info
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
