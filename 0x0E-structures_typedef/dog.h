#ifndef DOG_H
#define DOG_H

/**
 * struct dog - funtion that defines types types and declarations
 *
 * @name:  variable representing dogs name
 *
 * @owner: variable representing dogs owner
 *
 * @age: variable representing dogs age
 **/

struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/** redefines type for struct dog **/
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /** DOG_H **/
