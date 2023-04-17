#include "dog.h"
#include "stdlib.h"

/**
 * new_dog - creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: struct dog, NULL if fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	int lname, lowner, i;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL || !(name) || !(owner))
	{
		free(newdog);
		return (NULL);
	}

	for (lname = 0; name[lname] != '\0'; lname++)
		;

	for (lowner = 0; owner[lowner] != '\0'; lowner++)
		;

	newdog->name = malloc(lname + 1);
	newdog->owner = malloc(lowner + 1);

	if (!(newdog->name) || !(newdog->owner))
	{
		free(newdog->name);
		free(newdog->owner);
		free(newdog);
		return (NULL);
	}
	for (i = 0; i < lname; i++)
		newdog->name[i] = name[i];
	newdog->name[i] = '\0';

	newdog->age = age;

	for (i = 0; i < lowner; i++)
		newdog->owner[i] = owner[i];
	newdog->owner[i] = '\0';

	return (newdog);
}
