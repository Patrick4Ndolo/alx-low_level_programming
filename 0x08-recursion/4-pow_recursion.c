#include "main.h"
/**
  *_pow_recursion - returns value of x raised to power y
  *@x: - integer
  *@y: - exponential
  *Return: - -1 if y lower than 0
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}

