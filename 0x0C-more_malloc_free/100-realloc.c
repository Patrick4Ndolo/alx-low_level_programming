#include "main.h"
#include <stdlib.h>
/**
  *_realloc - reallocates a memory block using malloc and free
  *@ptr: - pointer to the memory previously alloacted 
  *with a call to malloc.
  *@old_size: - the size in byte of allocated spaces for ptr
  *@new_size: - new size of the new memory.
  *Returning: - 0 if new_size == old_size * ptr, 
  *null if new_size == 0, and ptr!= null.
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_copy, *caller;
	unsigned int indices;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		mem = malloc(new_size);
	if (mem == NULL)
		return (NULL);
	return (mem);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	mem = malloc(sizeof(*ptr_copy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	caller = mem;

	for (indices = 0; indices < old_size && indices < new_size;
			indices++)
		caller[indices] = *ptr_copy++;
	free(ptr);
	return (mem);

}
