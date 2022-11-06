#include "main.h"
/**
  *rot13 - encodes string using rot3
  *@str: parameter
  *Return: - encoded string
  */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		while ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i] >= 'a' && str[i] <= 'm') ||
					(str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
				i++;
			}

		}
		i++;
	}
	return (str);
}

