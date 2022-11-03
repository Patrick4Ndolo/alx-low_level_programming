#include "main.h"
/**
  *_sqrt_recursion - returns the natural square of a number
  *@n: - int
  *Return: - -1 if n does not have natural sqrt
  */
int _sqrt_recursion(int n)
{
	int square = n * n;

	if (square > n)
		return (-1);
	else if (square == n)
		return (1);
	return (_sqrt_recursion(square));
}


