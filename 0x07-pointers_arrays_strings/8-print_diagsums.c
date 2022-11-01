#include "main.h"
#include <stdio.h>
/**
  *print_diagsums - prints the sum of two diagonals of square
  *matrix of integers
  *@a: - pointer
  *@size: - int size of the pointer
  */

void print_diagsums(int *a, int size)
{
	int indices, sum1 = 0, sum2 = 0;

	for (indices = 0; indices < size; indices++)
	{
		sum1 += a[indices];
		a += size;
	}

	a -= size;

	for (indices = 0; indices < size; indices++)
	{
		sum2 += a[indices];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
