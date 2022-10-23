#include "main.h"
/**
  *print_last_digit - prints the last digit of a number.
  *@n: - number to be checked
  *Return: The value of the last digit
  */

int print_last_digit(int n)
{
	int la = n % 10;

	if (la < 0)
		la *= -1;
	_putchar(la + '0');

	return (0);

}
