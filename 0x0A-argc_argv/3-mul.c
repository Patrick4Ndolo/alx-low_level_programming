#include <stdio.h>
#include <stdlib.h>

/**
  *main - Entry
  *@argc: - first parameter
  *@argv: - second parameter
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
		printf("%d", multy);
		printf("\n");
	}
	else if (argc < 2)
		printf("Error");
	printf("\n");
	return (1);
}


