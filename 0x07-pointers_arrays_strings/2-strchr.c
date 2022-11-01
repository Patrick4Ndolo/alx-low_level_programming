#include "main.h"
/**
  **_strchr - locates a character in a string
  *@s: - string
  *@c: - the character to be located
  *Return: - pointer to the first occurence of the character,
  *and NULL if otherwise
  */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return (0);
}
