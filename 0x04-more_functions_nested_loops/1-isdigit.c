#include "main.h"
/**
  *_isdigit - checks for a digit between 0-9
  *@c: is checked if a digit
  *Return: 1 and 0 if otherwise
  */

int _isdigit(int c)
{
	
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);

}
