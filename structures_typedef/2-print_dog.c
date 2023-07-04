#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Print all the details of the struct of the dog
 * @d: pointers of the dog
 * Description: priting the name, age, owner of the dog
 *
 *If any of the fields of the struct is NULL, print "(nil)".
 *
 *if d is NULL, not print anything
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}


