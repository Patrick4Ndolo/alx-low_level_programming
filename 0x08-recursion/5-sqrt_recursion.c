#include "main.h"
/**
  *_sqrt_recursion - returns the natural square of a number
  *@n: - int
  *Return: - -1 if n does not have natural sqrt
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	else if (square == n)
		return (1);
	return (_sqrt_recursion(n, i + 1));
}


