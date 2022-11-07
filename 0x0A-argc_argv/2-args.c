#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry
  *@argc: - parameter
  *@argv: -  second parameter
  *Return: - nalue 0
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
