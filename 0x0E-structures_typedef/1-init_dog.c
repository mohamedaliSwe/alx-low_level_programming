#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 *
 * Return: None
 */
void init_dog(struct dog **d, char *name, float age, char *owner)
{
	if (*d == NULL)
	{
		*d = malloc(sizeof(struct dog));
		if (*d == NULL)
		{
			/* Handle memory allocation failure */
			perror("malloc");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		/* If *d is not NULL, free existing memory to avoid memory leaks */
		free((*d)->name);
		free((*d)->owner);
	}

	(*d)->name = strdup(name); /* Allocate and copy name */
	if ((*d)->name == NULL)
	{
		/* Handle memory allocation failure */
		perror("strdup");
		exit(EXIT_FAILURE);
	}

	(*d)->age = age;
	(*d)->owner = strdup(owner); /* Allocate and copy owner */
	if ((*d)->owner == NULL)
	{
		/* Handle memory allocation failure */
		perror("strdup");
		exit(EXIT_FAILURE);
	}
}
