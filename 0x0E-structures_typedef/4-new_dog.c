#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcpopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
  *_strlen - finds the length of the string.
  *@str: the string to measure
  *Return: the length of the string
  */

int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);

}

/**
  *_strcpopy - copies string pointed to by the src
  *@dest: The buffer storing the string copy
  *@src: The string source
  *Return: pointer to dest
  */

char *_strcpopy(char *dest, char *src)
{
	int indices = 0;

	for (indices = 0; src[indices]; indices++)
		dest[indices] = src[indices];
	dest[indices] = '\0';
	return (dest);
}

/**
  *new_dog - creates a new dog.
  *@name: the dog's name
  *@age: - the dog's age
  *@owner: - The owner of the dog.
  *Return: new struct dog.
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog1 = malloc(sizeof(dog_t));
	if (dog1 == NULL)
		return (NULL);

	dog1->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog1->name == NULL)
	{
		free(dog1);
		return (NULL);
	}

	dog1->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog1->owner == NULL)
	{
		free(dog1->name);
		free(dog1);
		return (NULL);
	}

	dog1->name = _strcpopy(dog1->name, name);
	dog1->age = age;
	dog1->owner = _strcpopy(dog1->owner, owner);

	return (dog1);
}
