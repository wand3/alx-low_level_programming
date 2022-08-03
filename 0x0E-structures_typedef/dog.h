#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure for a basic dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: data structure for dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
