#include "main.h"
/**
  **cap_string - capitalizes all words of a string
  *@str: - character string
  *Return: - capital letters
  */

char *cap_string(char *str)
{
	int k, j;

	k = 0;

	while (str[k])
	{
		while (!(str[k] >= 'a' && str[k] <= 'z'))
			k++;
		if (str[k - 1] == ' ' || str[k - 1] == '\t' ||
				str[k - 1]
				== '\n' || str[k - 1] == ',' ||
				str[k - 1] == ';' || str[k - 1] == '.' ||
				str[k - 1] == '!' || str[k - 1] == '?' ||
				str[k - 1] == '"' || str[k - 1] == '(' ||
				str[k - 1] == ')' || str[k - 1] == '{' ||
				str[k - 1] == '}' || j == 0)
			str[j] -= 32;
		j++;
	}
	return (str);
}
