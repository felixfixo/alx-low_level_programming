#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - function that frees dogs
 * @d: dog struct
 */
void free_dog(dog_t *d)
{
free(d->owner);
free(d->name);
free(d);
}
