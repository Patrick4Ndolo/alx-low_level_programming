#include "main.h"
#include <stdlib.h>

/**
  *array_range - creates an aaray of integers
  *@min: - the least value of an array
  *@max: - max value of an array.
  *Return: - NULL if min > max, malloc fails, and 0 otherwise
  */

int *array_range(int min, int max)
{
	int *array, indices, size;

	if (min > max)
		return (NULL);
	size = max - min +  1;
	array = malloc(sizeof(int) * size);
	
	if (array == NULL)
		return (NULL);
	for (indices = 0; indices < size; indices++)
		array[indices] = min++;
	return (array);
}
