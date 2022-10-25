#include "main.h"
/**
  *puts2 - prints every character of a string
  *@str: - string character
  */
void puts2(char *str)
{
	char g;

	for (; str[g] != '\0'; g++)
	{
		if ((g % 2) == 0)
			_putchar(str[g]);
		else
			continue;
	}
	_putchar('\n');
}

