#include "main.h"
#include <stdlib.h>
/**
  *create_array - create an array of character, and initialize
  *with a specific char
  *@size: - an array size
  *@c: - parameter
  *Return: NULL
  */
char *create_array(unsigned int size, char c)
{
	char buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

	/**
	  *defining values with malloc
	  */

	buffer = (char *) malloc(size * sizeof(c));
	if (buffer == 0)
	{
		return (NULL);
	}
	else
	{
		position = 0;
		/*looping through array*/
		while (position < size)
		{
			*(buffer + position) = c;
			position++;
		}
		return (buffer);
	}
}


