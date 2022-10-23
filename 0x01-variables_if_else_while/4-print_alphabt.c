#include <stdio.h>
#include <string.h>
/**
 * main - prints alphabet in lowercase
 * except letter q and e
 * Return: value 0
 */

int main(void)
{
	char ls;

	for (ls = 'a'; ls <= 'z'; ls++)

		if (ls != 'e' && ls != 'q')
			putchar(ls);




	putchar('\n');

	return (0);
}

