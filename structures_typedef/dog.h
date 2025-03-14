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

/*Void, char, int, unsigned prototypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /*DOG_H*/
