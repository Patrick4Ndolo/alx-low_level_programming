#include "main.h"
#include <stdlib.h>

/**
  *_calloc - allocates memory for an array
  *@nmemb: - number of elements
  *@size: - byte size of each array element
  *Return: - 0 if nmemb, and NULL if otherwise
  */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *caller;
	unsigned int indices;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);
	caller = mem;

	for (indices = 0; indices < (size * nmemb); indices++)
		caller[indices] = '\0';
	return (mem);
}
