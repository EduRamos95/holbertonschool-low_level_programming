#ifndef DOG_H
#define DOG_H
int _putchar(char c);
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
#endif
