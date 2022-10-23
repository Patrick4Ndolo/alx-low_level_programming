#include "main.h"

/**
  *print_square - prints a square
  *@size: The size of the square
  */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int k, j;

		for (k = 0; k < size; k++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
