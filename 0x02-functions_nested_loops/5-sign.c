#include "main.h"
/**
  *print_sign - prints the sign of a number
  *@n: - it is compared by the functtion
  *Return: 1 to print + if n is greater than zero,
  *0 and prints 0 if n is gr*eater than zero, -1
  *and print -1 if n is less than zero.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}


}




