#include "function_pointers.h"

/**
  *int_index - searches for an integer
  *@size: - number of an array elements
  *@cmp: - pointer to the function to compare values
  *@array: - input array
  *Return: - 0 if no element matches, -1 if size <= 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}


