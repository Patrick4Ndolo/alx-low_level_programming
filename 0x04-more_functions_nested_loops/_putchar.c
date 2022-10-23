#include <unistd.h>
#include "main.h"

/**
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return: On succes returns 1, otherwise 0
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
