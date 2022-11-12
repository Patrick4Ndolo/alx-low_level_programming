#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - concatenates two strings
  *@s1: - first string
  *@s2: - second string
  *@n: - max number of bytes of s2 to be concanetated to s1
  *Return: NULL if the function fails, 0 otherwise
  */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, indices;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (indices = 0; s1[indices]; indices++)
		len++;
	concat = malloc(sizeof(char) * (len + 1));
	if (concat == NULL)
		return (NULL);
	len = 0;
	for (indices = 0; s1[indices]; indices++)
		concat[len++] = s1[indices];
	for (indices = 0; s2[indices] && indices < n; indices++)
		concat[len++] = s2[indices];
	concat[len] = '\0';
	return (concat);
}
