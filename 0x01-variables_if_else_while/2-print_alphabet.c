#include <stdio.h>
#include <time.h>
/**
 * main - prints alphabets in lower case
 * Return: Value 0;
 */
int main(void)
{
	char k;

	k = 'a';
	while (k <= 'z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);

}
