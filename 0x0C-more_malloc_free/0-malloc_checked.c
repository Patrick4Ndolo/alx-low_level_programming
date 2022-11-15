#include "main.h"
#include <stdlib.h>

/**
  *malloc_checked - allocates memory
  *@b: - The number of bytes to be allocated
  *Return: A pointer to the located memory
  */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
