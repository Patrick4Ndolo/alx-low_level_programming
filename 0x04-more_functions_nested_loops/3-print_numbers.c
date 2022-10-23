#include "main.h"
#include "unistd.h"
/**
  *print_numbers - prints numbers from 0-9
  *Return: - value 0
  */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{

		_putchar(c);
	}
	_putchar('\n');

}

