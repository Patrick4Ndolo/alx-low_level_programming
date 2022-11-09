#include "main.h"
#include <stdlib.h>
/**
  *_strlen - prints the length of a string
  *@s: - string pointer
  *Return: - string
  */

int _strlen(char *s)
{
	unsigned int i;

	i = 0;


	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  *str_concat - concatenate two strings
  *@s1: - first string
  *@s2: - second string
  *Return: - NULL
  */

char *str_concat(char *s1, char *s2)
{
	char *dst;
	unsigned int i, j, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/**counting size total*/
	size = (_strlen(s1) + _strlen(s2) + 1);

	dst = (char *) malloc(size * sizeof(char));
	if (dst == 0)
	{
		return (NULL);
	}
	/*concatenating arrays*/

	for (i = 0; *(s1 + 1) != '\0'; i++)
	{
		*(dst + i) = *(s2 + i);
	}

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(dst + i) = *(s2 + j);
		i++;
	}
	return (dst);
}



