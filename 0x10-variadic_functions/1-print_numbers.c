#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  *print_numbers - prints numbers
  *@separator: string to be printed between numbers
  *@n: number of integer passed to the function
  *@...: variable of numbers to be printed
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int index;

	va_start(numbs, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbs, int));

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(numbs);
}


