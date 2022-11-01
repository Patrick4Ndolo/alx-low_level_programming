#include "main.h"
/**
  **_strpbrk - searches a string for any set of bytes
  *@s: - string
  *@accept: - pointer string
  *Return: - pointer to the byte in s that matches one of the
  *bytes in accept, NULL otherwise.
  */

char *_strpbrk(char *s, char *accept)
{
	int indices;

	while (*s)
	{
		for (indices = 0; accept[indices]; indices++)
		{
			if (*s == accept[indices])
				return (s);
		}
		s++;
	}
	return ('\0');
}


