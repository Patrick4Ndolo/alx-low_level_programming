#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return: value 0
 */
int main(void)
{
	char kl;

	for (kl = 'z'; kl >= 'a'; kl--)

		putchar(kl);



	putchar('\n');
	return (0);

}
