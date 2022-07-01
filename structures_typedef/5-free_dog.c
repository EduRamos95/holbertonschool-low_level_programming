#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - free structure
 * @d: name of strcture dog
 */
void free_dog(dog_t *d)
{
	/*clean all fields with malloc*/
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	free(d);
}
