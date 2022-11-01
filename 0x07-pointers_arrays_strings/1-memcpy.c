#include "main.h"
/**
  **_memcpy - copies memory area
  *@src: - source
  *@dest: - destination
  *@n: - number of unsigned int
  *Return: - dest
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int indices;

	for (indices = 0; indices < n; indices++)
	{
		dest[indices] = src[indices];
	}
	return (dest);
}
