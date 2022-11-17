#include "3-calc.h"

/**
  *main - Entry
  *@argc: argument count
  *@argv: - argument vector
  *Return: - value 0;
  */
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, kbytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	kbytes = atoi(argv[1]);

	if (kbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < kbytes; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != kbytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}

