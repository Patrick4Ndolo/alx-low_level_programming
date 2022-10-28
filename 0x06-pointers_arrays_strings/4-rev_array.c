#include "main.h"
/**
  *reverse_array -  reverses the content of an array of integers
  *@a: - int 1
  *@n: - int2
  *Return: - value 0
  */

void reverse_array(int *a, int n)
{
	int j;
	int k;

	for (j = 0; k < n; j++)
	{
		n--;
		k = a[j];
		a[j] = a[n];
		a[n] = k;
	}
}
