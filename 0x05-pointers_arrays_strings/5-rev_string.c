#include "main.h"
/**
  *rev_string - reverses a string
  *@s: - string to be reverse
  */
void rev_string(char *s)
{
	char rev = t[0];
	int w = 0;
	int k;

	while (s[w] != '\n')

		w++;
	for (k = 0; k < w; k++)
	{
		w--;
		rev = s[w];
		s[k] = s[w];
		s[w] = rev;
	}
}

