#include "main.h"
/**
  *_islower - checks if a character is in lower case
  *@c: - it is checked by the function
  *Return: 1 if the character is in lowecase, and otherwise if it is 0
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

