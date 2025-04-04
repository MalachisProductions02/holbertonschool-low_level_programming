#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A dog's basic info
 * @name: Name of the dog (char *)
 * @age: Age of the dog (float)
 * @owner: Owner of the dog (char *)
 *
 * Description: Defines a structure with this three members
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /*DOG_H*/
