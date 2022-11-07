#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry
  *@argc: - first parameter
  *@argv: - second parameter
  *Return: value 1
  */

int main(int argc, char *argv[])
{
	int i, multy = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			multy *= atoi(argv[i]);
		}
		printf("%d\n", multy);

	}
	else
		printf("Error\n");
	return (1);
}


