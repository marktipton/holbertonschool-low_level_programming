#ifndef _GOT_THAT_DOG_IN_EM_
#define _GOT_THAT_DOG_IN_EM_
/**
 *struct dog - dog information
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
