#include "function_pointers.h"
#include <stddef.h>
/**
  *print_name - prints name
  *@name: - firt argument
  *@f: - function
  *Return: NULL
  */

void print_name(char *name, void (*f)(char *))
{
	if (name || f)
		return;
	f(name);
}
