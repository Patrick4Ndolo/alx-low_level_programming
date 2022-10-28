#include "main.h"
/**
  **leet - encodes a string into 1337
  *@n: - input
  *Return: value of n
  */

char *leet(char *n)
{
	int j;
	int k;

	char l1[] = "aAeEoOtTlL";
	char l2[] = "4433007711";

	for (j = 0; n[j] != '\0'; j++)
	{
		for (k = 0; k < 10; K++)
		{
			if (n[j] == l1[k])
			{
				n[j] = l2[k];
			}
		}
	}
	return (n);
}
