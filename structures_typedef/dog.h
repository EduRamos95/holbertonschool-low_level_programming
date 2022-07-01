#ifndef DOG_H
#define DOG_H
int _putchar(char c);

/**
 * dog_t - Typedef struct dog 
 */
typedef struct dog dog_t;

/**
 * struct dog - structure for dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
