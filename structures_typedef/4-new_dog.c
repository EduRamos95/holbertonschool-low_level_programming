#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - create struct and iniliatize fields
 * @name: name of dof
 * @age: age of dog
 * @owner: name of owner
 * Return: a pointer of struct new_dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *custom_dog;
	char *copy_name;
	char *copy_owner;

	custom_dog = malloc(sizeof(dog_t));
	if (custom_dog == NULL)
	{
		free(custom_dog);
		return (NULL);
	}
	copy_name = malloc(sizeof(char) * (strlen(name) + 1));
	if (copy_name == NULL)
	{
		free(copy_name);
		free(custom_dog);
		return (NULL);
	}
	copy_owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (copy_owner == NULL)
	{
		free(copy_owner);
		free(copy_name);
		free(custom_dog);
		return (NULL);
	}
	custom_dog->age = age;
	custom_dog->name = strcpy(copy_name, name);
	custom_dog->owner = strcpy(copy_owner, owner);
	return (custom_dog);
}
