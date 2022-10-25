#include "main.h"
/**
  *print_rev - prints a string in reverse
  *@s: - string
  */
void print_rev(char *s)
{
	int w = 0;

	while (s[w] != '\0')
		w++;
	for (w = w - 1; w >= 0; w--)
		_putchar(s[w]);

	_putchar('\n');
}


