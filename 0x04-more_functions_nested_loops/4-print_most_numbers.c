#include "main.h"
#include <unistd.h>
/**
  *print_most_numbers - prints numbers from 0-9
  *Return: value 0
  */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i != 2 && i != 4)
			_putchar(i + '0');
		i++;
	}
	_putchar('\n');

}







