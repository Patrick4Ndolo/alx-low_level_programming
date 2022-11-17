#include "function_pointers.h"

/**
  *array_iterator - execute function given as a parameter on each element
  *@action: - pointer to the function to use
  *@size: - the size of the array
  *@array: - input integer
  *Return: - NULL
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
