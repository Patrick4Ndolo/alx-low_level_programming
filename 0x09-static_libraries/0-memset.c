#include "main.h"
#include <stddef.h>
/**
  **_memset -  fills memory with constant byte.
  *@s: - first byte
  *@b: - second byte
  *@n: - number of bytes
  *Return: points to the filled memory
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
		s[d] = b;

	}
	return (s);

}

