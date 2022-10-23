#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all base 16 numbers
 * Return: value 0
 */
int main(void)
{
	int number = 0;
	char sa = 'a';

	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}

	while (sa <= 'f')
	{

		putchar(sa);
		sa++;
	}


	putchar('\n');

	return (0);
}
