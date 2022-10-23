#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints single digits of base 10
 * Return: value 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		i++;
	}
	putchar('\n');
	return (0);


}
